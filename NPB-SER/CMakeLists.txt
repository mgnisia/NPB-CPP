cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(NAS_STL VERSION 1.0)

# SET CXX Standard
set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

# Definition of variables
set(COMPILE_FLAGS -O3 -tbb -mcmodel=large)

# Common Library
add_subdirectory(${PROJECT_SOURCE_DIR}/src/common)

# Sys Directory: Creates the required header files for each kernel
add_subdirectory(${PROJECT_SOURCE_DIR}/src/sys)

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
    FT
    IS
    MG
)

foreach(kernel IN LISTS kernels)
    string(TOLOWER ${kernel} kernel_lower)

    # Custom Target: Creates the required header file of the EP Kernel
    add_custom_target(${kernel}_header ALL 
    COMMAND cd ${PROJECT_SOURCE_DIR}/src/${kernel} && ./../../build/src/sys/setparams ${kernel} ${CLASS})
    add_dependencies(${kernel}_header setparams)

    # Create Kernel Executable Default Case
    add_executable(${kernel_lower}.${CLASS} src/${kernel}/${kernel_lower}.cpp)
    add_dependencies(${kernel_lower}.${CLASS} ${kernel}_header)
    target_compile_options(${kernel_lower}.${CLASS} PUBLIC -Ofast)

    # Link with library tbb
    target_link_libraries(${kernel_lower}.${CLASS} PUBLIC common)

endforeach()

