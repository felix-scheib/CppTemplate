#include <benchmark/benchmark.h>

#include "factorial.h"

static void BM_Factorial_1(benchmark::State& state) {
  for (auto _ : state) factorial(1);
}
BENCHMARK(BM_Factorial_1);

static void BM_Factorial_10(benchmark::State& state) {
  for (auto _ : state) factorial(10);
}
BENCHMARK(BM_Factorial_10);

BENCHMARK_MAIN();