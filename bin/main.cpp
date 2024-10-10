#include <dotenv.h>
#include <fmt/core.h>
#include <spdlog/spdlog.h>

#include <CLI/CLI.hpp>

#include "factorial.h"

int main(int argc, char **argv) {
  dotenv::init();

  spdlog::info("Hello from C++ Template!");

  fmt::println("FOO={}", std::getenv("FOO"));
  fmt::println("BAR={}", std::getenv("BAR"));

  CLI::App app;

  CLI11_PARSE(app, argc, argv);

  auto result = factorial(10);
  fmt::print("factorial(10) = {}\n", result);

  return 0;
}