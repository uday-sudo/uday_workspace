cmake_minimum_required(VERSION 3.10)

project(testing VERSION 1.0)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED On)

add_library(sqrt STATIC sqrt/sqrt.cxx)
add_library(square STATIC square/square.cxx)

target_include_directories(sqrt PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(square PUBLIC ${CMAKE_SOURCE_DIR}/include)


add_executable(testing testing.cxx)

target_link_libraries(testing 
              PRIVATE sqrt 
              PRIVATE square
             )
