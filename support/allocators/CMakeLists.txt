cmake_minimum_required(VERSION 3.10)
add_library(Allocators INTERFACE)
target_include_directories(Allocators INTERFACE secure.h)
