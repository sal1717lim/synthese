cmake_minimum_required(VERSION 3.3)
project(helloglfw)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")

# Including GLFW
add_subdirectory(glfw)
include_directories(glfw/include)
add_library(glad "C:/Program Files (x86)/Dev-Cpp/MinGW64/include/glad/glad.h" "./glad.c")
add_library(glm "./shader/shader.hpp" "./shader/shader.cpp")
set(SOURCE_FILES main.cpp Model/Facetriple.cpp Model/Facetriple.h face.cpp face.h facedouble.cpp facedouble.h strvertex.h facetriple.cpp facetriple.h CUBE.cpp CUBE.h facegenrique.cpp facegenrique.h)
add_executable(helloglfw ${SOURCE_FILES})

# Linking GLFW
target_link_libraries(helloglfw glfw glad ${GLFW_LIBRARIES})
