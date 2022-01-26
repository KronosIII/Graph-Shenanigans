cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Source/Graphs/Graph.cpp Source/Graphs/Graph.h Source/Graphs/Distance.cpp Source/Graphs/Distance.h)
