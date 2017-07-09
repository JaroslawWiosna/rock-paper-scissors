cmake_minimum_required (VERSION 2.6)

option(SANITIZER "Address Sanitizer" OFF)
option(BUILD_TESTS "Build tests" ON)

set(CMAKE_CXX_STANDARD 11)
set(COMPILE_FLAGS "--std=gnu++11 -Wall -Wno-missing-braces")
set(GTEST_FLAGS "-lgtest")
set(LINK_FLAGS "-lpthread")

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(COMPILE_FLAGS  "${COMPILE_FLAGS} -stdlib=libstdc++")
endif()

if(BUILD_TESTS)
  set(LINK_FLAGS "${GTEST_FLAGS} ${LINK_FLAGS}")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}" )
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINK_EXECUTABLE} ${LINK_FLAGS}" )

include_directories( Weapon )
set(files
)

project (rock-paper-scissors)
find_package(Gtest)
add_executable(rock-paper-scissors main.cpp ${files}) 
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries(rock-paper-scissors gtest pthread)

enable_testing()
find_package(Gtest)

if(BUILD_TESTS)
  add_subdirectory(tests)
endif()

