cmake_minimum_required(VERSION 3.25)

project(myath VERSION 1.0.0 LANGUAGES CXX)

file(GLOB_RECURSE src src/*.cc)
file(GLOB_RECURSE include include/*.h)

add_library(myadd ${src} ${include})
add_library(Mymath::myadd ALIAS myadd)
target_include_directories(myadd PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

if(PROJECT_IS_TOP_LEVEL)
message(STATUS "project is at top levl, add subdirectory test")
    add_subdirectory(test)
endif()

