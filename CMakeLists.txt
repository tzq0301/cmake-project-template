cmake_minimum_required(VERSION 3.28)

project(
    tour
    VERSION 1.0.0
    LANGUAGES CXX
)

include(FetchContent)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG e69e5f9
)

FetchContent_MakeAvailable(fmt)

add_executable(${PROJECT_NAME} src/main.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
)
target_link_libraries(${PROJECT_NAME} PRIVATE
    fmt::fmt
)
