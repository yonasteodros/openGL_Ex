cmake_minimum_required(VERSION 2.8)

project(Immediate)
add_executable(Immediate Immediate.cpp)
add_executable(ImmediateTriangles ImmediateTriangles.cpp)
find_package(OpenGL REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS} ${glfw_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )

target_link_libraries(Immediate ${OPENGL_LIBRARIES} glfw GLEW::GLEW ${GLUT_LIBRARY} )
target_link_libraries(ImmediateTriangles ${OPENGL_LIBRARIES} glfw GLEW::GLEW ${GLUT_LIBRARY} )
