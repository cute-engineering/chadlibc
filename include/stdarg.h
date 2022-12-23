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
#ifndef _STDARG_H
# define _STDARG_H 1

# ifdef __cplusplus
extern "C" {
# endif /* __cplusplus */

# define va_list __builtin_va_list
# define va_start(v, f) __builtin_va_start(v, f)
# define va_end(v) __builtin_va_end(v)
# define va_arg(v, a) __builtin_va_arg(v, a)

# ifdef __cplusplus
}
# endif /* __cplusplus */

#endif /* !_STDARG_H */
