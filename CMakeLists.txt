cmake_minimum_required(VERSION 3.23)
project(vscodetest C)

add_executable(vscodetest main.c)
target_compile_options(vscodetest PUBLIC -debug)
target_link_libraries(vscodetest PUBLIC -lndos)
