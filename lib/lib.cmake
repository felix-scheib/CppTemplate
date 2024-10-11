add_library(fibonacci
    ${CMAKE_CURRENT_LIST_DIR}/fibonacci.h
    ${CMAKE_CURRENT_LIST_DIR}/fibonacci.cpp
)

target_include_directories(fibonacci
    INTERFACE 
    ${CMAKE_CURRENT_LIST_DIR}
)