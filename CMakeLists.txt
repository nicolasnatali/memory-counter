cmake_minimum_required(VERSION 3.22)
project(memory_counter)

set(CMAKE_CXX_STANDARD 20)

add_executable(memory_counter main.cpp Counter.cpp Counter.h Memory.cpp Memory.h MemoryCounter.cpp MemoryCounter.h)
