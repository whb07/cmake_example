add_library(Support movie.h movie.cpp)
add_subdirectory(allocators)
target_include_directories(Support PUBLIC allocators)
target_include_directories(Support PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
