cmake_minimum_required(VERSION 3.20.0)
project(MyProjectName VERSION 1.0)

# our source files
file(GLOB_RECURSE SRC_FILES src/*.cpp)

# Declaring our executable
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/dependencies)