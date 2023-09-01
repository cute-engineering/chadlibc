#ifndef ALLTYPES_H
#define ALLTYPES_H

#define _Addr long
#define _Int64 long
#define _Reg long

#define __BYTE_ORDER 1234
#define __LONG_MAX 0x7fffffffffffffffL

#ifndef __cplusplus
typedef int wchar_t;
#endif

#if defined(__FLT_EVAL_METHOD__) && __FLT_EVAL_METHOD__ == 2
typedef long double float_t;
typedef long double double_t;
#else
typedef float float_t;
typedef double double_t;
#endif

typedef struct { long long __ll; long double __ld; } max_align_t;

#endif
