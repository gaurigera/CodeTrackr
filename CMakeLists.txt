cmake_minimum_required(VERSION 3.22)
project(CPP_VCS)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
set(SOURCES
    src/main.cpp
    src/init.cpp
    src/init.hpp
)

add_executable(cpp_vcs ${SOURCES})

# Find and include libraries
# find_package(filesystem)
target_link_libraries(cpp_vcs)