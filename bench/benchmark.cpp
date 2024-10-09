#include <benchmark/benchmark.h>

#include "factorial.h"

static void BM_StringCreation(benchmark::State& state) {
  for (auto _ : state) std::string empty_string;
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

// Define another benchmark
static void BM_StringCopy(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state) std::string copy(x);
}
BENCHMARK(BM_StringCopy);

// Define another benchmark
static void BM_Factorial(benchmark::State& state) {
  for (auto _ : state) factorial(10);
}
BENCHMARK(BM_Factorial);

BENCHMARK_MAIN();