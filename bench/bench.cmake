add_executable(
    ${BENCHMARK_NAME}
    ${CMAKE_CURRENT_LIST_DIR}/benchmark.cpp
)
target_link_libraries(
    ${BENCHMARK_NAME}
    benchmark::benchmark
)