# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(beer_lib)

set(BUILD_Shared_LIBS ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS True)

add_library(beer_lib src/beerrating.cpp)

# PUBLIC needed to make both hello.h and hello library available elsewhere in project
target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Tell compiler to use C++20 features. The code doesn't actually use any of them.
target_compile_features(beer_lib PUBLIC cxx_std_20)

add_custom_command(TARGET beer_lib POST_BUILD 
  COMMAND "${CMAKE_COMMAND}" -E copy 
     "$<TARGET_FILE:beer_lib>"
     "../beer-rating/$<CONFIGURATION>/$<TARGET_FILE_NAME:beer_lib>" 
  COMMENT "Copying to output directory")

add_custom_command(TARGET beer_lib POST_BUILD 
COMMAND "${CMAKE_COMMAND}" -E copy 
    "$<TARGET_FILE:beer_lib>"
    "../tests/$<CONFIGURATION>/$<TARGET_FILE_NAME:beer_lib>" 
COMMENT "Copying to tests directory")