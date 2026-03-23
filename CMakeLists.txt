cmake_minimum_required(VERSION 3.21)
project(CPlusPlusSE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_executable(lesson01_hello lessons/01-cpp-foundations/src/hello.cpp)
add_test(NAME lesson01_hello_runs COMMAND lesson01_hello)

add_executable(example_abstract_factory examples/abstract_factory/main.cpp)
add_test(NAME example_abstract_factory_runs COMMAND example_abstract_factory)

add_executable(example_builder examples/builder/main.cpp)
add_test(NAME example_builder_runs COMMAND example_builder)
