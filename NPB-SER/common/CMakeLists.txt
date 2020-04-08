# Definition of rand variable
set(RAND randdp)

set(common_source_files
wtime.cpp 
c_${RAND}.cpp
c_timers.cpp
wtime.cpp
c_print_results.cpp)

# Common Library
add_library(common ${common_source_files})