cmake_minimum_required(VERSION 3.20)

project(Pet_project)

enable_testing()

add_executable(Pet Pet_project.cpp Console_Display.cpp Real_Delay.cpp Countdown.cpp)
add_executable(Test_Pet Test_Pet_project.cpp Console_Display.cpp Real_Delay.cpp Countdown.cpp)

add_test(NAME Testing_Pet COMMAND Test_Pet)