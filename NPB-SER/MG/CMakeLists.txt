# CMakeLists for MG
if (CLASS STREQUAL "S")
        set( problem_size 32 )
        set( NIT_DEFAULT 4 )
        # log(32) / log(2) -> log to the base of 2
        set( log_2 5 )
    elseif(CLASS STREQUAL "W")
        set( problem_size 64)
        set( NIT_DEFAULT 40)
        set( log_2 6 )
    elseif(CLASS STREQUAL "A")
        set( problem_size 256)
        set( NIT_DEFAULT 4)
        set( log_2 8 )
    elseif(CLASS STREQUAL "B")
        set( problem_size 256)
        set( NIT_DEFAULT 20)
        set( log_2 8 )
    elseif(CLASS STREQUAL "C")
        set( problem_size 512)
        set( NIT_DEFAULT 20)
        set( log_2 9 )
endif ()

set( NX_DEFAULT ${problem_size} )
set( NY_DEFAULT ${problem_size} )
set( NZ_DEFAULT ${problem_size} )
set( LT_DEFAULT ${log_2} )
set( LM ${log_2} )
set( NDIM1 ${log_2} )
set( NDIM2 ${log_2} )
set( NDIM3 ${log_2} )
set( DEBUG_DEFAULT '0' )

# Include directory for header file
include_directories(${CMAKE_CURRENT_BINARY_DIR})
# Create Configuration File
configure_file(npbparams.temp.hpp npbparams.hpp)
# EP Executable
add_executable(MG mg.cpp)
# Link with library common
target_link_libraries(MG common)