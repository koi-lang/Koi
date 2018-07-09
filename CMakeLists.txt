cmake_minimum_required(VERSION 3.6)
project(Koi)

set(CMAKE_CXX_STANDARD 14)

add_executable(Koi
        src/main/cpp/main.cpp
        src/main/cpp/KoiVisitor.cpp src/main/cpp/KoiVisitor.hpp)

include_directories(
        src/main/c/
        src/main/cpp/

        libs/antlr4-runtime
        libs/antlr4-runtime/misc
        libs/antlr4-runtime/atn
        libs/antlr4-runtime/dfa
        libs/antlr4-runtime/tree
        libs/antlr4-runtime/support

        generated/koi-generated
)
