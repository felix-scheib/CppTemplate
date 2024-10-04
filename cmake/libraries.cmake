include(${CMAKE_HOME_DIRECTORY}/cmake/CPM.cmake)

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
