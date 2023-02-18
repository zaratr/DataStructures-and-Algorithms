project(Google_tests)
add_subdirectory(${CMAKE_SOURCE_DIR}/Google_tests/lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(Google_Tests_run basic_tests/TestEncapsulation.cpp basic_tests/ArraysTest.cpp)

target_link_libraries(Google_Tests_run source_lib)

target_link_libraries(Google_Tests_run gtest gtest_main)

#add test to the project
add_test(NAME Google_Tests_run COMMAND Google_Tests_run --verbose)
