cmake_minimum_required(VERSION 3.24)
project(c__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(source_lib_run ${SOURCE_FILES})

include_directories(source_lib)
add_subdirectory(source_lib)

target_link_libraries(source_lib_run source_lib)

#add_executable(c__ main.cpp)
add_subdirectory(Google_tests)

