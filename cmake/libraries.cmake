include(${CMAKE_HOME_DIRECTORY}/cmake/CPM.cmake)

CPMAddPackage(
    NAME googletest
    GIT_TAG v1.15.2
    GITHUB_REPOSITORY google/googletest
    OPTIONS
        "INSTALL_GTEST OFF"
        "gtest_force_shared_crt ON"
)

CPMAddPackage(
    NAME benchmark
    GIT_TAG v1.9.0
    GITHUB_REPOSITORY google/benchmark
    OPTIONS
        "BENCHMARK_ENABLE_TESTING NO"
        "HAVE_STD_REGEX ON"
        "RUN_HAVE_STD_REGEX ON"
)

if (benchmark_ADDED)
    set_target_properties(benchmark PROPERTIES CXX_STANDARD ${CMAKE_CXX_STANDARD})
endif()

CPMAddPackage(
    NAME fmt
    GIT_TAG 11.0.2
    GITHUB_REPOSITORY fmtlib/fmt
)

CPMAddPackage(
    NAME spdlog
    GIT_TAG v1.14.1
    GITHUB_REPOSITORY gabime/spdlog
)

CPMAddPackage(
    NAME CLI11 spdlog
    GIT_TAG v2.4.2
    GITHUB_REPOSITORY CLIUtils/CLI11
)
