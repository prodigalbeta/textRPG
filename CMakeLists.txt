cmake_minimum_required (VERSION 4.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project ("textRPG")
file(GLOB SRC "src/*.cpp")
add_executable (textRPG "main.cpp" ${SRC})