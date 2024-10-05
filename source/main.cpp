#include <fmt/core.h>
#include <spdlog/spdlog.h>

#include <CLI/CLI.hpp>

#include "factorial/factorial.h"

int main(int argc, char **argv) {
  CLI::App app;

  CLI11_PARSE(app, argc, argv);

  spdlog::info("Hello from C++ Template!");
  fmt::print("Hello from C++ Template!\n");

  auto result = factorial(10);
  fmt::print("factorial(10) = {}\n", result);

  return 0;
}