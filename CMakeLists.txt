cmake_minimum_required(VERSION 3.20)
project(JorgeGamboa)

set(CMAKE_CXX_STANDARD 14)

add_executable(JorgeGamboa main.cpp Service.cpp Service.h Management.cpp Management.h OilStation.cpp OilStation.h LinkedList.cpp LinkedList.h Node.h)
