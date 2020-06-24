# CMakeLists files in this project can
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and
# to the root binary directory of the project as ${HELLO_BINARY_DIR}.
cmake_minimum_required (VERSION 3.10)
project (BITCOIN)
enable_language(CXX)

# Recurse into the "Hello" and "Demo" subdirectories. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.
add_subdirectory (support)


set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wshadow -Wconversion -Wno-long-long -pedantic -fsanitize=address -fno-omit-frame-pointer" CACHE STRING "C compiler flags" FORCE )

add_executable(bitcoin_exe main.cpp)

target_link_libraries(bitcoin_exe LINK_PUBLIC Support)

MESSAGE( STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS} )
