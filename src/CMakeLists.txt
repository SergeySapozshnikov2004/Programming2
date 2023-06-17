cmake_minimum_required(VERSION 3.2)
project(miit)

add_subdirectory(Piquet)
set(SOURCE_FILES main.cpp)

add_executable(miit ${SOURCE_FILES})
target_link_libraries(miit piquet)
install(TARGETS miit DESTINATION ${MIIT_INSTALL_BIN_DIR})
