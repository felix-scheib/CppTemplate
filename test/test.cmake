enable_testing()

add_executable(
    ${TEST_NAME}
    ${CMAKE_CURRENT_LIST_DIR}/test.cpp
)
target_link_libraries(
    ${TEST_NAME}
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${TEST_NAME})