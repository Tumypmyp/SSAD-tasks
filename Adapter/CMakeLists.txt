cmake_minimum_required(VERSION 3.20)
project(Adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Adapter main.cpp Duck/Duck.cpp Duck/Duck.h Duck/MallardDuck.cpp Duck/MallardDuck.h Turkey/Turkey.cpp Turkey/Turkey.h Turkey/WildTurkey.cpp Turkey/WildTurkey.h TurkeyAdapter.cpp TurkeyAdapter.h)
