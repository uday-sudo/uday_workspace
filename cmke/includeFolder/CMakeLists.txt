cmake_minimum_required(VERSION 3.20)
project(my-project)
include_directories(include)
add_executable(my-app src/main.c src/greet.c)
