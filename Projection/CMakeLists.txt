cmake_minimum_required(VERSION 2.8)

project(Model)
file(GLOB source_files
           "*.hpp"
           "../include/*.hpp"
   )

add_executable(Model Model.cpp ${source_files})
add_executable(ModelView ModelView.cpp ${source_files})


find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLUT REQUIRED)
FIND_PACKAGE(glm)
FIND_PACKAGE(Threads REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS} ${glm_INCLUDE_DIRS} ${glfw_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )


target_link_libraries(Model ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(ModelView ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT} )

