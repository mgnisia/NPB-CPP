/* CLASS = @CLASS@
 * Definition with configure_file function of cmake
 * */
#cmakedefine NA @NA@
#cmakedefine NONZER @NONZER@
#cmakedefine NITER @NITER@
#cmakedefine SHIFT @SHIFT@
#cmakedefine RCOND @RCOND@
#cmakedefine COMPILETIME "@COMPILETIME@"
#define	CONVERTDOUBLE	FALSE
#define NPBVERSION "4.0"
#define CS1 "g++ -std=c++14"
#define CS2 "$(CC)"
#define CS3 "-lm "
#define CS4 "-I../common "
#define CS5 "-O3"
#define CS6 "-O3"
#define CS7 "randdp"
