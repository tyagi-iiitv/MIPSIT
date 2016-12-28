#ifndef __MATH_H__
#define __MATH_H__
#define HUGE_VAL	((double)1.7e+308)
extern double acos(double);	
extern double acosh(double);
extern double asin(double);
extern double asinh(double);
extern double atan(double);
extern double atan2(double, double);
extern double atanh(double);
extern double cabs();
extern double cbrt(double);
extern double ceil(double);
extern double copysign(double, double);
extern double cos(double);
extern double cosh(double);
extern double drem(double, double);
extern double exp(double);
extern double expm1(double);
extern double fabs(double);
extern double floor(double);
extern double fmod(double, double);
extern double frexp(double, int *);
extern double hypot(double, double);
extern double ldexp(double, int);
extern double log(double);
extern double log10(double);
extern double log1p(double);
extern double logb(double);
extern double modf(double, double *);
extern double pow(double, double);
extern double rint(double);
extern double scalb(double, int);
extern double sin(double);
extern double sinh(double);
extern double sqrt(double);
extern double tan(double);
extern double tanh(double);
extern double z_abs();
extern double xtoi();
extern int finite(double);
#endif /* __MATH_H__ */

