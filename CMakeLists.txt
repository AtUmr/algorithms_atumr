cmake_minimum_required(VERSION 3.5)
project(algorithms_atumr)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    main.cpp
)

add_executable(main.out ${SOURCES})

target_link_libraries(main.out gtest pthread)
