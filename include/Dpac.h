#ifndef __DPAC_H__ /* to make sure the contents of dpac.h get inlcuded once */
#define __DPAC_H__

typedef int spfloat;
typedef struct {int hi, lo;} dpfloat;
union { dpfloat a; double db11; } du11,du22;
union { int ui[2]; double ud; } dtoi;
/* Single Precision FPAC function prototypes */

spfloat fpadd(spfloat,spfloat);
spfloat fpsub(spfloat,spfloat);
spfloat fpmul(spfloat,spfloat);
spfloat fpdiv(spfloat,spfloat);
int             fpcmp(spfloat,spfloat);
spfloat fpflt(int);
int             fpint(spfloat);
int             fpfix(spfloat);
spfloat faint(spfloat);                         /* spfloating   floor */
spfloat fascbin(char *,int *);
int             fbinasc(spfloat,char *,int,int);
spfloat fpexp(spfloat);
spfloat fpln(spfloat);
spfloat fplog(spfloat);
spfloat fpsin(spfloat);
spfloat fpcos(spfloat);
spfloat fpsqrt(spfloat);
spfloat fptan(spfloat);
spfloat fpxtoi(spfloat,int);
spfloat fpatn(spfloat); 

/* Single Precision FPAC function prototypes */

int dpcmp(int,int,int,int);
int dpcmpm(int,int,int,int);
#define dpcmp(arg1,arg2) dpcmpm(arg1.hi,arg1.lo,arg2.hi,arg2.lo)

dpfloat dpflt(int);
dpfloat dpfltm(int);
#define dpflt(arg1) dpfltm(arg1)

int dpint(int,int);
int dpintm(int,int);
#define dpint(arg1) dpintm(arg1.hi,arg1.lo)

dpfloat daint(int,int);
dpfloat daintm(int,int);
#define daint(arg1) daintm(arg1.hi,arg1.lo)

int dpfix(int,int);
int dpfixm(int,int);
#define dpfix(arg1) dpfixm(arg1.hi,arg1.lo)

dpfloat dascbin(char *,int *);

int dbinasc(dpfloat,char *,int,int);
/*int dbinascm(int,int,char *,int,int);
#define dbinasc(arg1,arg2,arg3,arg4) dbinasc(arg1.ho,arg1.lo,arg2,arg3,arg4);
*/
dpfloat sptodp(spfloat);                        /* convert spfloat to double */

spfloat dptosp(int,int);                        /* convert double to spfloat */
spfloat dptospm(int,int);                       
#define dptosp(arg1) dptospm(arg1.hi,arg1.lo)

dpfloat dpdiv(int,int,int,int);
dpfloat dpdivm(int,int,int,int);
#define dpdiv(arg1,arg2) dpdivm(arg1.hi,arg1.lo,arg2.hi,arg2.lo)

dpfloat dpadd(int, int, int, int);
dpfloat dpaddm(int, int, int, int);
#define dpadd(arg1,arg2) dpaddm(arg1.hi,arg1.lo,arg2.hi,arg2.lo)

dpfloat dpsub(int, int, int, int);
dpfloat dpsubm(int, int, int, int);
#define dpsub(arg1,arg2) dpsubm(arg1.hi,arg1.lo,arg2.hi,arg2.lo)

dpfloat dpmul(int, int, int, int);
dpfloat dpmulm(int, int, int, int);
#define dpmul(arg1,arg2) dpmulm(arg1.hi,arg1.lo,arg2.hi,arg2.lo)

dpfloat dpexp(int,int);
dpfloat dpexpm(int,int);
#define dpexp(arg1) dpexpm(arg1.hi,arg1.lo)

dpfloat dpln(int, int);
dpfloat dplnm(int,int);
#define dpln(arg1) dplnm(arg1.hi,arg1.lo)

dpfloat dplog(int, int);
dpfloat dplogm(int,int);
#define dplog(arg1) dplogm(arg1.hi,arg1.lo)

dpfloat dpsin(int, int);
dpfloat dpsinm(int,int);
#define dpsin(arg1) dpsinm(arg1.hi,arg1.lo)

dpfloat dpcos(int, int);
dpfloat dpcosm(int,int);
#define dpcos(arg1) dpcosm(arg1.hi,arg1.lo)

dpfloat dpsqrt(int, int);
dpfloat dpsqrtm(int,int);
#define dpsqrt(arg1) dpsqrtm(arg1.hi,arg1.lo)

dpfloat dptan(int,int);
dpfloat dptanm(int,int);
#define dptan(arg1) dptanm(arg1.hi,arg1.lo)

dpfloat dpxtoi(int,int,int);
dpfloat dpxtoim(int,int,int);
#define dpxtoi(arg1,int) dpxtoim(arg1.hi,arg1.lo,int)

dpfloat dpatn(int,int);
dpfloat dpatnm(int,int);
#define dpatn(arg1) dpatnm(arg1.hi,arg1.lo)

#endif /* __DPAC_H__ */

