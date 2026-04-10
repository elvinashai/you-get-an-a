cmake_minimum_required(VERSION 3.27)
project(you_get_an_a)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main
        src/main.cpp
        src/gradebook.cpp
        src/student.cpp
        src/assignment.cpp
)