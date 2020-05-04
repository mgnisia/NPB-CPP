/* CLASS = @CLASS@
 * Definition with configure_file function of cmake
 * */
#cmakedefine	NX_DEFAULT	@NX_DEFAULT@
#cmakedefine	NY_DEFAULT	@NY_DEFAULT@
#cmakedefine	NZ_DEFAULT	@NZ_DEFAULT@
#cmakedefine	NIT_DEFAULT @NIT_DEFAULT@
#cmakedefine	LM	@LM@
#cmakedefine	LT_DEFAULT	@LT_DEFAULT@
#cmakedefine	DEBUG_DEFAULT @DEBUG_DEFAULT@
#cmakedefine	NDIM1	@NDIM1@
#cmakedefine	NDIM2	@NDIM2@
#cmakedefine	NDIM3	@NDIM3@
#define	CONVERTDOUBLE	FALSE
#define COMPILETIME "@COMPILETIME@"
#define NPBVERSION "4.0"
#define CS1 "g++ -std=c++14"
#define CS2 "$(CC)"
#define CS3 "-lm "
#define CS4 "-I../common "
#define CS5 "-O3"
#define CS6 "-O3"
#define CS7 "randdp"
