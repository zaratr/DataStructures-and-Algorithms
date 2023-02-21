#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")
#set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
#add_compile_options(-fsanitize=address)
#add_link_options(-fsanitize=address)
enable_testing()
cmake_minimum_required(VERSION 3.23)
project(c__)
set(CMAKE_CXX_STANDARD 14)
#include(FetchContent)
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

