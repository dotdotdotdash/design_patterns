cmake_minimum_required(VERSION 2.8.9)

project(LinkedList)

include_directories(include include/${PROJECT_NAME})

add_executable(linked_list src/linked_list.cpp)