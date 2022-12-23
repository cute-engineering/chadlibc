/*
 * Copyright 2022 Cute Engineewing 
 *
 * This file is part of ChadLibC.
 *
 * ChadLibC is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free 
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * ChadLibC is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more 
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with ChadLibC. If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef _LIMITS_H
# define _LIMITS_H 1

# include <abi/limits.h>

# define CHAR_BIT   8
# define CHAR_MAX   SCHAR_MAX
# define CHAR_MIN   SCHAR_MIN
# define MB_LEN_MAX 0
# define INT_MIN	   (-1 - 0x7fffffff)
# define INT_MAX	   0x7fffffff
# define LONG_MIN   (-LONG_MAX - 1)
# define LONG_MAX   __LONG_MAX
# define SCHAR_MAX  127
# define SCHAR_MIN  (-128)
# define SHRT_MAX   0x7fff
# define SHRT_MIN   (-1 - 0x7fff)
# define UCHAR_MAX  0xff
# define UINT_MAX   0xffffffffU
# define ULONG_MAX  (2UL * LONG_MAX + 1)
# define USHRT_MAX  0xffff

#endif /* !_LIMITS_H */
