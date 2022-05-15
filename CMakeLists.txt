cmake_minimum_required(VERSION 3.0.0)
project(Beer-Rating VERSION 0.1.0)


add_subdirectory(beer_lib)
add_subdirectory(beer-rating)

if(PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME)
    add_subdirectory(tests)
endif() #PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME
