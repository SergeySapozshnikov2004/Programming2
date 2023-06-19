cmake_minimum_required(VERSION 3.2)
project(dequeue C CXX)

set(SOURCE_FILES
    Dequeue.cpp
    Dequeue.h
    )

add_library(dequeue SHARED STATIC ${SOURCE_FILES})

install(TARGETS dequeue DESTINATION ${MIIT_INSTALL_LIB_DIR})
install(FILES  Dequeue.h DESTINATION ${MIIT_INSTALL_INCLUDE_DIR})
