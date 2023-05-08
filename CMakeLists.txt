cmake_minimum_required(VERSION 3.10)
project(University-db)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(FLAGS
    -Wall
    -Wextra
    -Wpedantic
    -Wconversion
)

set(SRC 
    src/person.cpp
    src/student.cpp
    src/dataBase.cpp
)

add_executable(${PROJECT_NAME} main.cpp)
add_library(${PROJECT_NAME}-lib STATIC ${SRC})
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})

