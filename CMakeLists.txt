cmake_minimum_required(VERSION 3.20)
project(TP)

set(CMAKE_CXX_STANDARD 11)

add_executable(TP main.cpp Interface.cpp Interface.h Simulacao.cpp Simulacao.h Zona.cpp Zona.h Edificio.cpp Edificio.h Trabalhador.cpp Trabalhador.h)
