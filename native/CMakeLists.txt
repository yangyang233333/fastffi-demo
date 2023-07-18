cmake_minimum_required(VERSION 3.4)
project(native)

include_directories(.)

find_package(JNI REQUIRED)
include_directories(${JNI_INCLUDE_DIRS})

file(GLOB SRC ./*.h ./*.cpp ./*.cc)
add_library(native SHARED ${SRC})
target_link_libraries(native ${JNI_LIBRARIES})