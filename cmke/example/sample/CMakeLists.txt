
add_library(MathFunctions MathFunctions.cxx mysqrt.cxx)

    #dd_library(SqrtLibrary STATIC mysqrt.cxx)
    #3target_link_libraries(MathFunctions PRIVATE SqrtLibrary)

message(STATUS "\n\n\n ----------- This is a sub directory")
message(STATUS "SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message(STATUS "CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "BINARY_DIR = ${CMAKE_BINARY_DIR}")
message(STATUS "CURRENT_BINARY_DIR = ${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS " ----------- This is a sub directory\n\n\n")
