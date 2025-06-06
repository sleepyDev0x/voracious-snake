cmake_minimum_required(VERSION 3.10)
project(voracious_snake)

set(CMAKE_CXX_STANDARD 17)

add_executable(voracious_snake
        main.cpp
        Snake.cpp
        Food.cpp
        Renderer.cpp
        UserInput.cpp
)
