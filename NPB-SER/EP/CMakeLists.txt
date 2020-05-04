# CMakeLists for EP
if (CLASS STREQUAL "S")
        set(M 24)
    elseif(CLASS STREQUAL "W")
        set(M 25)
    elseif(CLASS STREQUAL "A")
        set(M 28)
    elseif(CLASS STREQUAL "B")
        set(M 30)
    elseif(CLASS STREQUAL "C")
        set(M 32)
endif ()

# Include directory for header file
include_directories(${CMAKE_CURRENT_BINARY_DIR})
# Create Configuration File
configure_file(npbparams.temp.hpp npbparams.hpp)
# EP Executable
add_executable(EP ep.cpp)
# Link with library common
target_link_libraries(EP common)