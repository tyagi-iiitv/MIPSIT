/* general definitions */

#define WHITESP(cc) (cc == ' ' || cc == '\t' || cc == '\n')

/* floating-point definitions */

#define INT long
#define HI 0
#define LO 1
#define DOUBLE double
typedef unsigned long FLOAT ;

#define DPADD(d1,d2,d3) d3 = dpadd(d1, d2)
#define DPSUB(d1,d2,d3) d3 = dpsub(d1, d2)
#define DPMUL(d1,d2,d3) d3 = dpmul(d1, d2)
#define DPDIV(d1,d2,d3) d3 = dpdiv(d1, d2)
#define DPCMP(d1,d2) dpcmp(d1, d2)
#define LITODP(l,d) d = litodp(l)
#define DPTOLI(d) dptoli(d)
#define ULTODP(l,d) d = ultodp(l)
#define DPTOUL(d) dptoul(d)
#define DPTOFP(d,r) r = dptofp(d)
#define FPTODP(f,r) r = fptodp(f)
#define FPADD(f1,f2,f3) f3 = fpadd(f1, f2)
#define FPSUB(f1,f2,f3) f3 = fpsub(f1, f2)
#define FPMUL(f1,f2,f3) f3 = fpmul(f1, f2)
#define FPDIV(f1,f2,f3) f3 = fpdiv(f1, f2)
#define SITOFP(i,f) f = sitofp(i)
#define FPTOSI(f) fptosi(f)
#define FLOOR(d,r) r = dpfloor(d)
#define CEIL(d,r) r = dpceil(d)
#define FABS(d,r) r = dpfabs(d)
#define SQRT(d,r) r = dpsqrt(d)
#define FMOD(x,y,r) r = dpfmod(x, y)
#define LDEXP(x,i,r) r = dpldexp(x, i)
#define FREXP(x,i,r) r = dpfrexp(x, &i)
#define MODF(x,i,r) r = dpmodf(x, &i)
#define SIN(d,r) r = dpsin(d)
#define COS(d,r) r = dpcos(d)
#define TAN(d,r) r = dptan(d)
#define EXP(d,r) r = dpexp(d)
#define LOG(d,r) r = dplog(d)
#define LOG10(d,r) r = dplog10(d)
#define ATAN(d,r) r = dpatan(d)
#define ATAN2(x,y,r) r = dpatan2(x, y)
#define ACOS(d,r) r = dpacos(d)
#define ASIN(d,r) r = dpasin(d)
#define POW(x,y,r) r = dppow(x, y)

DOUBLE dpadd(DOUBLE D1, DOUBLE D2);
DOUBLE dpsub(DOUBLE D1, DOUBLE D2);
DOUBLE dpdiv(DOUBLE D1, DOUBLE D2);
DOUBLE dpmul(DOUBLE D1, DOUBLE D2);
int dpcmp(DOUBLE D1, DOUBLE D2);
DOUBLE dpsqrt(DOUBLE D1);
DOUBLE dpfmod(DOUBLE D1, DOUBLE D2);
DOUBLE dpldexp(DOUBLE D1, INT i);
DOUBLE dpfrexp(DOUBLE D1, INT *i);
DOUBLE dpmodf(DOUBLE D1, DOUBLE *D2);
DOUBLE dpfloor(DOUBLE D1);
DOUBLE dpceil(DOUBLE D1);
DOUBLE dpfabs(DOUBLE D1);
DOUBLE dpsin(DOUBLE D1);
DOUBLE dpcos(DOUBLE D1);
DOUBLE dptan(DOUBLE D1);
DOUBLE dpexp(DOUBLE D1);
DOUBLE dplog(DOUBLE D1);
DOUBLE dplog10(DOUBLE D1);
DOUBLE dpatan(DOUBLE D1);
DOUBLE dpatan2(DOUBLE D1, DOUBLE D2);
DOUBLE atan2(DOUBLE D1, DOUBLE D2);
DOUBLE dpacos(DOUBLE D1);
DOUBLE dpasin(DOUBLE D1);
DOUBLE dpcosh(DOUBLE D1);
DOUBLE dpsinh(DOUBLE D1);
DOUBLE dptanh(DOUBLE D1);
DOUBLE dppow(DOUBLE D1, DOUBLE D2);
DOUBLE litodp(long l);
long dptoli(DOUBLE d);
DOUBLE ultodp(unsigned long l);
unsigned long dptoul(DOUBLE d);
DOUBLE fptodp(float F1);
float dptofp(DOUBLE d);

float fpadd(float F1, float F2);
float fpsub(float F1, float F2);
float fpdiv(float F1, float F2);
float fpmul(float F1, float F2);
int fpcmp(float F1, float F2);
float fpsqrt(float F1);
float fpfmod(float F1, float F2);
float fpldexp(float F1, INT i);
float fpfrexp(float F1, INT *i);
float fpmodf(float F1, float *F2);
float fpfloor(float F1);
float fpceil(float F1);
float fpfabs(float F1);
float fpsin(float F1);
float fpcos(float F1);
float fptan(float F1);
float fpexp(float F1);
float fplog(float F1);
float fplog10(float F1);
float log10f(float F1); 
float logf(float F1);
float fpatan(float F1);
float fpatan2(float, float);
float atan2f(float, float);
float fpacos(float F1);
float fpasin(float F1);
float fpcosh(float F1);
float fpsinh(float F1);
float fptanh(float F1);
float fppow(float F1, float F2);
float sitofp(long i);
float uitofp(unsigned long i);
long fptosi(float F);
unsigned long fptoui(float F);

int ascdp(char *b, DOUBLE *d);
int dpasc(char *b, char *fmt, DOUBLE *d, int siz);
