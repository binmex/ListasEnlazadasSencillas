cmake_minimum_required(VERSION 3.20)
project(ListasEnlazadasSencillas)

set(CMAKE_CXX_STANDARD 14)

add_executable(ListasEnlazadasSencillas main.cpp Node.h LinkedList.cpp LinkedList.h Empleado.cpp Empleado.h)
