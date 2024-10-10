add_library(factorial
    ${CMAKE_CURRENT_LIST_DIR}/factorial.h
    ${CMAKE_CURRENT_LIST_DIR}/factorial.cpp
)

target_include_directories(factorial
    INTERFACE 
    ${CMAKE_CURRENT_LIST_DIR}
)