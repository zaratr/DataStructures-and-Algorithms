enable_testing()
cmake_minimum_required(VERSION 3.23)
project(c__)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
include(FetchContent)
#FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip)

set(SOURCE_FILES main.cpp)
add_executable(source_lib_run ${SOURCE_FILES})

include_directories(source_lib)
add_subdirectory(source_lib)

target_link_libraries(source_lib_run source_lib)

#add_executable(c__ main.cpp)
add_subdirectory(Google_tests)

# For Windows: Prevent overriding the parent project's compiler/linker settings
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#FetchContent_MakeAvailable(googletest)
