cmake_minimum_required(VERSION 3.21)
project(shape2d)

set(CMAKE_CXX_STANDARD 23)
add_compile_options(-Wall)

add_executable(shape2d main.cpp CShape2D.cpp CShape2D.h CColor.cpp CColor.h CPoint2D.cpp CPoint2D.h CCircle.cpp CCircle.h)
