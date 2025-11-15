cmake_minimum_required(VERSION 3.20)
project(ssg)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(${PROJECT_NAME} STATIC
  src/Div.cpp
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(test_main tests/main.cpp)
target_link_libraries(test_main PRIVATE ssg)
