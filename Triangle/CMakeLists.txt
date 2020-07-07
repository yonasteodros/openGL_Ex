cmake_minimum_required(VERSION 2.8)

project(Triangle)
file(GLOB source_files
           "*.hpp"
           "../include/*.hpp"
   )

add_executable(Triangle TriangleBuffer.cpp ${source_files})
add_executable(TriangleColorBuffer TriangleColorBuffer.cpp ${source_files})
add_executable(TriangleOrtho TriangleOrtho.cpp ${source_files})


find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLUT REQUIRED)
FIND_PACKAGE(glm)

include_directories( ${OPENGL_INCLUDE_DIRS} ${glfw_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )

target_link_libraries(Triangle ${OPENGL_LIBRARIES} glfw GLEW::GLEW ${GLUT_LIBRARY} )
target_link_libraries(TriangleColorBuffer ${OPENGL_LIBRARIES} glfw GLEW::GLEW ${GLUT_LIBRARY} )
target_link_libraries(TriangleOrtho ${OPENGL_LIBRARIES} glfw GLEW::GLEW ${GLUT_LIBRARY} )
