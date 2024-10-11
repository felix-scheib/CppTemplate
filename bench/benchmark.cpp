#include <benchmark/benchmark.h>

#include "fibonacci.h"

static void BM_Fibonacci_1(benchmark::State& state) {
  for (auto _ : state) fibonacci(1);
}
BENCHMARK(BM_Fibonacci_1);

static void BM_Fibonacci_10(benchmark::State& state) {
  for (auto _ : state) fibonacci(10);
}
BENCHMARK(BM_Fibonacci_10);

BENCHMARK_MAIN();