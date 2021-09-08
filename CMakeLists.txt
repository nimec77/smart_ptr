cmake_minimum_required(VERSION 3.20)
project(smart_ptr)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

set(SRC_LIST
        main.cpp
        src/handle_helper.cpp
        src/smart_ptr.cpp
        )

add_executable(${PROJECT_NAME} ${SRC_LIST})
