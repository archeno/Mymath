cmake_minimum_required(VERSION 3.25)

project(myath VERSION 1.0.0 LANGUAGES CXX)

file(GLOB_RECURSE src src/*.cc)
file(GLOB_RECURSE include include/*.h)

add_library(myadd ${src} ${include})
target_include_directories(myadd PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

option(BUILD_TEST "build test and run " ON)
add_subdirectory(test)






