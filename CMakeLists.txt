cmake_minimum_required(VERSION 3.20)
project(template CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(TEST_NAME "${PROJECT_NAME}_test")
set(BENCHMARK_NAME "${PROJECT_NAME}_bench")

include(cmake/CPM.cmake)
include(cmake/libraries.cmake)

include(lib/lib.cmake)

include(bin/bin.cmake)

include(bench/bench.cmake)
include(test/test.cmake)
