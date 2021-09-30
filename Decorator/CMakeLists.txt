cmake_minimum_required(VERSION 3.20)
project(Decorator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Decorator main.cpp Text.cpp Text.h TextView.cpp TextView.h Decorator/BorderDecorator.cpp Decorator/BorderDecorator.h Decorator/TitleDecorator.cpp Decorator/TitleDecorator.h)
