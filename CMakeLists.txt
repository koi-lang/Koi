cmake_minimum_required(VERSION 3.6)
project(Koi)

set(CMAKE_CXX_STANDARD 14)

add_executable(Koi
        ${Koi_SOURCE_DIR}/src/main/cpp/main.cpp
        ${Koi_SOURCE_DIR}/src/main/cpp/KoiVisitor.cpp
        ${Koi_SOURCE_DIR}/src/main/cpp/KoiVisitor.hpp)

include_directories(
        ${Koi_SOURCE_DIR}/src/main/c/
        ${Koi_SOURCE_DIR}/src/main/cpp/

        ${Koi_SOURCE_DIR}/libs/antlr4-runtime
        ${Koi_SOURCE_DIR}/libs/antlr4-runtime/misc
        ${Koi_SOURCE_DIR}/libs/antlr4-runtime/atn
        ${Koi_SOURCE_DIR}/libs/antlr4-runtime/dfa
        ${Koi_SOURCE_DIR}/libs/antlr4-runtime/tree
        ${Koi_SOURCE_DIR}/libs/antlr4-runtime/support

        ${Koi_SOURCE_DIR}/generated/koi-generated)

find_library(ANTLR antlr4-runtime.lib ${Koi_SOURCE_DIR}/libs)
target_link_libraries(Koi ${ANTLR})