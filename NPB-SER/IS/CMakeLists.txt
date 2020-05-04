# CMakeLists for IS
# no definition of additional parameters required
# Include directory for header file
include_directories(${CMAKE_CURRENT_BINARY_DIR})
# Create Configuration File
configure_file(npbparams.temp.hpp npbparams.hpp)
# EP Executable
add_executable(IS is.cpp)
# Link with library common
target_link_libraries(IS common)