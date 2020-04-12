cmake_minimum_required(VERSION 3.14)

project(CodingDojo)

add_subdirectory(vendor)

# Settings
add_library(settings INTERFACE)
target_compile_features(settings INTERFACE cxx_std_17)
target_compile_options(settings INTERFACE -pedantic -Wall -Werror)

# Code
add_library(code)
target_sources(code PRIVATE source/code.cc)
target_link_libraries(code PUBLIC settings)

# Test
add_executable(test)
target_sources(test PRIVATE source/test-code.cc)
target_link_libraries(test PRIVATE code doctest::doctest)
add_custom_target(run-tests ALL test ARGS -fc)
