AC_PREREQ([2.71])
AC_INIT([ChadLibC], m4_esyscmd([build-aux/gen-version]), 
	[https://github.com/cute-engineewing/chadlibc/issues], [chadlibc])
AC_COPYRIGHT([Copyright (C) 2022 Cute Engineewing])

AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_FILES([Makefile libc/Makefile libm/Makefile test/Makefile])

AM_INIT_AUTOMAKE([foreign nostdinc subdir-objects])

AC_CANONICAL_HOST

AC_PROG_CC
AC_PROG_CPP
AC_PROG_RANLIB
AC_PROG_INSTALL

AS_CASE([$host_cpu],
  [i?86], [ARCH=i386],
  [x86_64], [ARCH=x86_64],
  [AC_MSG_ERROR("No support for CPU $host_cpu")]
)
AC_SUBST([ARCH])

AS_CASE([$host_os],
	[linux*], [OS=linux],
	[AC_MSG_ERROR("No support for OS $host_os")]
)
AC_SUBST([OS])

AC_ARG_WITH([headers],
	[sysheaders=$withval]
	[sysheaders=''])


AC_OUTPUT
