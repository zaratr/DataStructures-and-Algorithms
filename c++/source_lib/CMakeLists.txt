project(source)

set(HEADER_FILES
        inheritence_example/encapsulation.h
        )

set(SOURCE_FILES
        inheritence_example/encapsulation.cpp
        )

add_library(source_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})