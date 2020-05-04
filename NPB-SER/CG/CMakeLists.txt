# CMakeLists for CG
# Parameter Settings
#
if (CLASS)
    message("Class ${CLASS} defined")
else()
    message(FATAL_ERROR "Class is not defined")
endif ()

set(RCOND 1.0e-1)
if (CLASS STREQUAL "S")
    set(NA 1400)
    set(NONZER 7)
    set(NITER 15)
    set(SHIFT 10)
elseif(CLASS STREQUAL "W")
    set(NA 7000)
    set(NONZER 8)
    set(NITER 15)
    set(SHIFT 12)
elseif(CLASS STREQUAL "A")
    set(NA 14000)
    set(NONZER 11)
    set(NITER 15)
    set(SHIFT 20)
elseif(CLASS STREQUAL "B")
    set(NA 75000)
    set(NONZER 13)
    set(NITER 75)
    set(SHIFT 60)
elseif(CLASS STREQUAL "C")
    set(NA 150000)
    set(NONZER 15)
    set(NITER 75)
    set(SHIFT 110)
endif ()

# Include directory for header file
include_directories(${CMAKE_CURRENT_BINARY_DIR})
# Create Configuration File
configure_file(npbparams.temp.hpp npbparams.hpp)
# CG Executable
add_executable(CG cg.cpp)
# Link with library common
target_link_libraries(CG common)