/* $NetBSD: fix_grouping.c,v 1.7 2024/06/07 13:53:12 riastradh Exp $ */

/*
 * Copyright (c) 2001 Alexey Zelkin <phantom@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * Original version ID:
 *     FreeBSD: fix_grouping.c,v 1.8 2003/06/26 10:46:16 phantom Exp
 */

#if HAVE_NBTOOL_CONFIG_H
#include "nbtool_config.h"
#endif

#include <sys/cdefs.h>
#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: fix_grouping.c,v 1.7 2024/06/07 13:53:12 riastradh Exp $");
#endif /* LIBC_SCCS and not lint */

#include <limits.h>
#include <stddef.h>

#include "fix_grouping.h"

#ifndef NBCHAR_MAX
#define NBCHAR_MAX	CHAR_MAX
#endif

#ifndef __UNCONST
#define __UNCONST(a)    ((void *)(unsigned long)(const void *)(a))
#endif

static const char nogrouping[] = { NBCHAR_MAX, '\0' };

/* don't use libc's isdigit, it owes locale. */
#define isdigit(c)	(c >= '0' && c <= '9')

/*
 * Internal helper used to convert grouping sequences from string
 * representation into POSIX specified form, i.e.
 *
 * "3;3;-1" -> "\003\003\177\000"
 */

const char *
__fix_locale_grouping_str(const char *str)
{
	char *src, *dst;
	char n;

	if (str == NULL || *str == '\0') {
		return nogrouping;
	}

	for (src = __UNCONST(str), dst = __UNCONST(str); *src != '\0'; src++) {

		/* input string examples: "3;3", "3;2;-1" */
		if (*src == ';')
			continue;
	
		if (*src == '-' && *(src+1) == '1') {
			*dst++ = NBCHAR_MAX;
			src++;
			continue;
		}

		if (!isdigit((unsigned char)*src)) {
			/* broken grouping string */
			return nogrouping;
		}

		/* assume all numbers <= 99 */
		n = *src - '0';
		if (isdigit((unsigned char)*(src+1))) {
			src++;
			n *= 10;
			n += *src - '0';
		}

		*dst = n;
		/* NOTE: assume all input started with "0" as 'no grouping' */
		if (*dst == '\0')
			return (dst == __UNCONST(str)) ? nogrouping : str;
		dst++;
	}
	*dst = '\0';
	return str;
}
