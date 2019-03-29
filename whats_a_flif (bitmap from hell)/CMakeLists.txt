cmake_minimum_required(VERSION 3.13)
project(whats_a_flif)

set(CMAKE_CXX_STANDARD 11)

add_executable(whats_a_flif main.cpp Flifmap.cc Flifmap.hh)