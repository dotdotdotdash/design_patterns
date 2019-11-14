cmake_minimum_required(VERSION 2.8.3)
project(matchday)

include_directories(include)

add_library(matchday_lib
    src/defense_offside_trap.cpp)
    #src/defense_zonal_marking.cpp
    #src/offense_counter_attack.cpp
    #src/offense_long_ball.cpp
    #src/offense_possession.cpp
    #src/substitution_leading.cpp
    #src/substitution_red_card.cpp
    #src/substitution_trailing.cpp)

add_executable(matchday src/matchday.cpp)
target_link_libraries(matchday matchday_lib)
