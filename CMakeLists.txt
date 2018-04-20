cmake_minimum_required(VERSION 3.10)
project(projet)

set(CMAKE_CXX_STANDARD 11)

add_executable(projet main.cpp Expression.cpp Operateur.cpp Constante.cpp Addition.cpp Soustraction.cpp Multiplication.cpp Division.cpp Division.h Expression.h Operateur.h Constante.h Addition.h Soustraction.h Multiplication.h)