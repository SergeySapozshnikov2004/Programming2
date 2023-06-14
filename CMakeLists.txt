cmake_minimum_required(VERSION 3.2)

project(project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(MIIT_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(MIIT_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(MIIT_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(PIQUET_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/Piquet)

include_directories(${MIIT_INSTALL_INCLUDE_DIR})
include_directories(${PIQUET_HEADERS_DIR})

add_subdirectory(src)

add_subdirectory(test)


