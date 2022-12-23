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
#ifndef _MATH_H
# define _MATH_H 1

# ifdef __cplusplus
extern "C" {
# endif /* __cplusplus */

/* Power functions */
double sqrt(double);
double pow(double, double);

/* Nearest integer, absolute value, and remainder functions */
double floor(double);

# ifdef __cplusplus
}
# endif /* __cplusplus */

#endif /* !_MATH_H */
