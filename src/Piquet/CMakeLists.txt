cmake_minimum_required(VERSION 3.2)
project(division C CXX)

set(SOURCE_FILES
    Curve.cpp
    Curve.h
    Limitation.h
    Limitation.cpp
    math.h
    math.cpp
    Piquet.h
    Piquet.cpp
)

add_library(piquet SHARED STATIC ${SOURCE_FILES})

install(TARGETS piquet DESTINATION ${MIIT_INSTALL_LIB_DIR})
install(FILES  Curve.h Limitation.h math.h Piquet.h DESTINATION ${MIIT_INSTALL_INCLUDE_DIR})
