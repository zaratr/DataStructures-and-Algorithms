project(source)

set(HEADER_FILES
        inheritence_example/encapsulation.h
        Arrays/ArrayShift/ArrayShift.h Arrays/BinarySearch/BinarySearch.h
        Arrays/InsertionSort/InsertionSort.h
        Arrays/InsertionShiftArray/InsertionShiftArray.h)

set(SOURCE_FILES
        inheritence_example/encapsulation.cpp
        Arrays/ArrayShift/ArrayShift.cpp Arrays/BinarySearch/BinarySearch.cpp
        Arrays/InsertionSort/InsertionSort.cpp
        Arrays/InsertionShiftArray/InsertionShiftArray.cpp)

add_library(source_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})