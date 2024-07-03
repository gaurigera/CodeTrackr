cmake_minimum_required(VERSION 3.22)
project(CPP_VCS)

set(CMAKE_CXX_STANDARD 17)

# Add source files
set(SOURCES
    src/main.cpp
    src/version_control.cpp
    src/file_utils.cpp
    src/hash_utils.cpp
    src/commit.cpp
)

add_executable(cpp_vcs ${SOURCES})

# Find and include libraries
find_package(Boost REQUIRED COMPONENTS filesystem serialization)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(cpp_vcs ${Boost_LIBRARIES})