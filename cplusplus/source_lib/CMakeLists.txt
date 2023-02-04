project(source)

set(HEADER_FILES
        encapsulation.h
        )

set(SOURCE_FILES
        encapsulation.cpp
        )

add_library(source_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})