add_executable(${PROJECT_NAME}
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    spdlog::spdlog
    fmt::fmt
    CLI11::CLI11
    dotenv
    factorial
)
