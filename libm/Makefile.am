OS = @OS@
ARCH = @ARCH@
sysdeps_srcdir = sysdeps/@OS@/@ARCH@
AM_CPPFLAGS=-I$(srcdir)/../include -I%D% -I$(srcdir)/../include/$(ARCH) -D_GNU_SOURCE -I$(srcdir)/../libc/$(sysdeps_srcdir)/include
AM_CFLAGS=-nostdlib -nostartfiles -nodefaultlibs -ffreestanding

noinst_LIBRARIES = libm.a

libm_a_SOURCES = __cos.c __cosdf.c __cosl.c __expo2.c __expo2f.c __fpclassify.c \
				__fpclassifyf.c __fpclassifyl.c __invtrigl.c __invtrigl.h  \
				__math_divzero.c __math_divzerof.c __math_invalid.c \
				__math_invalidf.c __math_invalidl.c __math_oflow.c \
				__math_oflowf.c __math_uflow.c __math_uflowf.c __math_xflow.c \
				__math_xflowf.c __polevll.c __rem_pio2.c __rem_pio2_large.c \
				__rem_pio2f.c __rem_pio2l.c __signbit.c __signbitf.c \
				__signbitl.c __sin.c __sindf.c __sinl.c __tan.c __tandf.c \
				__tanl.c acos.c acosf.c acosh.c acoshf.c acoshl.c acosl.c \
				asin.c asinf.c asinh.c asinhf.c asinhl.c asinl.c atan.c atan2.c \
				atan2f.c atan2l.c atanf.c atanh.c atanhf.c atanhl.c atanl.c \
				cbrt.c cbrtf.c cbrtl.c ceil.c ceilf.c ceill.c copysign.c \
				copysignf.c copysignl.c cos.c cosf.c cosh.c coshf.c coshl.c \
				cosl.c erf.c erff.c erfl.c exp.c exp10.c exp10f.c exp10l.c \
				exp2.c exp2f.c exp2f_data.c exp2f_data.h exp2l.c exp_data.c \
				exp_data.h expf.c expl.c expm1.c expm1f.c expm1l.c fabs.c \
				fabsf.c fabsl.c fdim.c fdimf.c fdiml.c finite.c finitef.c \
				floor.c floorf.c floorl.c fma.c fmaf.c fmal.c fmax.c fmaxf.c \
				fmaxl.c fmin.c fminf.c fminl.c fmod.c fmodf.c fmodl.c frexp.c \
				frexpf.c frexpl.c hypot.c hypotf.c hypotl.c ilogb.c ilogbf.c \
				ilogbl.c j0.c j0f.c j1.c j1f.c jn.c jnf.c ldexp.c ldexpf.c \
				ldexpl.c lgamma.c lgamma_r.c lgammaf.c lgammaf_r.c lgammal.c \
				llrint.c llrintf.c llrintl.c llround.c llroundf.c llroundl.c \
				log.c log10.c log10f.c log10l.c log1p.c log1pf.c log1pl.c \
				log2.c log2_data.c log2f.c log2f_data.c log2l.c log_data.c \
				logb.c logbf.c logbl.c logf.c logf_data.c logl.c lrint.c \
				lrintf.c lrintl.c lround.c lroundf.c lroundl.c modf.c modff.c \
				modfl.c nan.c nanf.c nanl.c nearbyint.c nearbyintf.c \
				nearbyintl.c nextafter.c nextafterf.c nextafterl.c nexttoward.c \
				nexttowardf.c nexttowardl.c pow.c pow_data.c powf.c powf_data.c \
				powl.c remainder.c remainderf.c remainderl.c remquo.c remquof.c \
				remquol.c rint.c rintf.c rintl.c round.c roundf.c roundl.c \
				scalb.c scalbf.c scalbln.c scalblnf.c scalblnl.c scalbn.c \
				scalbnf.c scalbnl.c signgam.c significand.c significandf.c \
				sin.c sincos.c sincosf.c sincosl.c sinf.c sinh.c sinhf.c \
				sinhl.c sinl.c sqrt.c sqrt_data.c sqrtf.c sqrtl.c tan.c tanf.c \
				tanh.c tanhf.c tanhl.c tanl.c tgamma.c tgammaf.c tgammal.c \
				trunc.c truncf.c truncl.c
