cmake_minimum_required(VERSION 3.28)
project(CppModules)

add_library(Lib STATIC)
set_target_properties(Lib
    PROPERTIES
        CXX_STANDARD 23
)
add_executable(Exec)
set_target_properties(Exec
    PROPERTIES
        CXX_STANDARD 23
)
target_link_libraries(Exec
    PUBLIC
        Lib
)

add_subdirectory(src)