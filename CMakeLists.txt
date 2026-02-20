cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hellcast)

include(FetchContent)

add_executable(${PROJECT_NAME}

    "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"

)

FetchContent_Declare(
    sdl
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG release-2.0.9
)

FetchContent_Declare(
    glm
    GIT_REPOSITORY https://github.com/g-truc/glm.git
    GIT_TAG 1.0.3
)

FetchContent_MakeAvailable(sdl)
FetchContent_MakeAvailable(glm)

target_link_libraries(${PROJECT_NAME}
    glm SDL2
)

target_include_directories(${PROJECT_NAME} PRIVATE

    "${CMAKE_CURRENT_SOURCE_DIR}/include"

)