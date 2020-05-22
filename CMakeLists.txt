cmake_minimum_required(VERSION 3.0)

set (project_name "Github-Action-Test")

project(${project_name})

add_executable(main src/main.cc)

install(TARGETS main)

enable_testing()
add_test(NAME main_test COMMAND main_test)