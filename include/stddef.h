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
#ifndef _STDDEF_H
# define _STDDEF_H 1

# ifdef __cplusplus
extern "C" {
# endif /* __cplusplus */

# define NULL ((void *)0)

# ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ size_t;
# else
typedef unsigned long size_t;
# endif /* __SIZE_TYPE__ */

# ifdef __PTRDIFF_TYPE__
typedef __PTRDIFF_TYPE__ ptrdiff_t;
# else
typedef long ptrdiff_t;
# endif /* __PTRDIFF_TYPE__ */

# ifdef __cplusplus
}
# endif /* __cplusplus */

#endif /* !_STDDEF_H */
