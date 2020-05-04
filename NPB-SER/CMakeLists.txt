cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(NAS_STL VERSION 1.0)

# SET CXX Standard
set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

# Definition of variables
set(COMPILE_FLAGS -O3 -tbb -mcmodel=large)

# Common Library for random number generator
add_subdirectory(common)

# Current Compile Date
string(TIMESTAMP COMPILETIME "%Y.%m.%d")

# e.g. set(CLASS "S")
if (CLASS)
    message("Class ${CLASS} defined")
else()
    message(FATAL_ERROR "Class is not defined")
endif ()


# Kernels
set(kernels
    CG
    EP
    # FT
    # IS
    # MG
)

foreach(kernel IN LISTS kernels)
message("Adding ${kernel} Kernel")
    add_subdirectory(${kernel})
endforeach()

