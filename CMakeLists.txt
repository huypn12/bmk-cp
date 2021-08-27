cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(hmm)

# Static lib
set(SOURCES
  src/fibheap.c
)
add_library(yadsl ${SOURCES})
target_include_directories(yadsl PRIVATE include)

 
