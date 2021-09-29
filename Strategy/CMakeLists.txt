cmake_minimum_required(VERSION 3.20)
project(Strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Strategy main.cpp Duck/Duck.cpp Duck/Duck.h FlyBehavior/FlyBehavior.cpp FlyBehavior/FlyBehavior.h FlyBehavior/FlyWithWings.cpp FlyBehavior/FlyWithWings.h FlyBehavior/FlyNoWay.cpp FlyBehavior/FlyNoWay.h QuackBehavior/QuackBehavior.cpp QuackBehavior/QuackBehavior.h QuackBehavior/Quacking.cpp QuackBehavior/Quacking.h QuackBehavior/Squeak.cpp QuackBehavior/Squeak.h QuackBehavior/MuteSqueak.cpp QuackBehavior/MuteSqueak.h Duck/MallardDuck.cpp Duck/MallardDuck.h DiveBehavior/DiveBehavior.cpp DiveBehavior/DiveBehavior.h DiveBehavior/DiveWithTail.cpp DiveBehavior/DiveWithTail.h DiveBehavior/DiveNoWay.cpp DiveBehavior/DiveNoWay.h)
