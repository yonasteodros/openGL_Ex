cmake_minimum_required(VERSION 2.8)

project(Version)
add_executable(Version Version.cpp)
find_package(OpenGL REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS} ${glfw_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )

target_link_libraries(Version ${OPENGL_LIBRARIES} glfw GLEW::GLEW ${GLUT_LIBRARY} )
