cmake_minimum_required(VERSION 3.10)
project(University-db)

set(FLAGS
    -Wall
    -Wextra
    -Wpedantic
    -Wconversion
)

set(SRC 
    person.cpp
    student.cpp
    dataBase.cpp
)

add_executable(${PROJECT_NAME} main.cpp)
add_library(${PROJECT_NAME}-lib STATIC ${SRC})
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
