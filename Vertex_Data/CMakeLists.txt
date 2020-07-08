cmake_minimum_required(VERSION 2.8)

project(Cube)
file(GLOB source_files
           "*.hpp"
           "../include/*.hpp"
   )

add_executable(Cube Cube.cpp ${source_files})
add_executable(DynamicMesh DynamicMesh.cpp ${source_files})
add_executable(Texture Texture.cpp ${source_files})
add_executable(TextureLoader TextureLoader.cpp ${source_files})
add_executable(LightingAndTexture LightingAndTexture.cpp ${source_files})
add_executable(Lighting Lighting.cpp ${source_files})

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLUT REQUIRED)
FIND_PACKAGE(glm)
FIND_PACKAGE(Threads REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS} ${glm_INCLUDE_DIRS} ${glfw_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )


target_link_libraries(Cube ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})

target_link_libraries(DynamicMesh ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})

target_link_libraries(Texture ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})

target_link_libraries(TextureLoader ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})

target_link_libraries(LightingAndTexture ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})

target_link_libraries(Lighting ${OPENGL_LIBRARIES} glm glfw GLEW::GLEW ${GLUT_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})
