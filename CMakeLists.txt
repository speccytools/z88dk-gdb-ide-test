cmake_minimum_required(VERSION 3.16)
project(idetest C)

add_executable(idetest main.c)
target_compile_options(idetest PUBLIC -debug)
target_link_libraries(idetest PUBLIC -lndos)
target_link_options(idetest PUBLIC -debug)
