cmake_minimum_required(VERSION 3.10)

project(testing VERSION 1.0)

#Define Compiler options
set(COMPILER_OPTIONS -Wall -Wextra -Werror -O2)
set(FILES_TO_COPY nums.txt nums1.txt nums2.txt nums3.txt)

add_compile_options(${COMPILER_OPTIONS})

add_subdirectory(sample)
#Add a static and an dynamic library
add_library(sqrt STATIC sqrt/sqrt.cxx)
add_library(square SHARED square/square.cxx)

target_include_directories(sqrt PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(sqrt PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(MathFunctions PUBLIC ${CMAKE_SOURCE_DIR}/sample)


# An Example Message
message(STATUS "Compile options: ${COMPILER_OPTIONS}")

# Custom command for build folder
foreach(FILE ${FILES_TO_COPY})
  add_custom_command(
    OUTPUT ${CMAKE_BINARY_DIR}/files/${FILE}
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/files/${FILE} ${CMAKE_BINARY_DIR}/files/${FILE}
    DEPENDS ${CMAKE_SOURCE_DIR}/files/${FILE}
    COMMENT "Copying ${FILE}"
  )
endforeach()

foreach(FILE ${FILES_TO_COPY})
  add_custom_target(
    Copy_${FILE} ALL
    DEPENDS ${CMAKE_BINARY_DIR}/files/${FILE}
  )
endforeach()


add_executable(executable testing.cxx)


target_link_libraries(executable
              PRIVATE MathFunctions
              PRIVATE sqrt 
              PRIVATE square
             )

message(STATUS "\n\n\n ----------- This is the root directory")
message(STATUS "SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message(STATUS "CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "BINARY_DIR = ${CMAKE_BINARY_DIR}")
message(STATUS "CURRENT_BINARY_DIR = ${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS " ----------- This is the root directory\n\n\n")
