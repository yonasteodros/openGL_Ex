/*
 * =====================================================================================
 *
 *       Filename:  xVersion.cpp
 *
 *    Description: initialize a context and print out OpenGL version
 *
 *        Version:  1.0
 *        Created:  06/10/2014 12:39:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pablo Colapinto (), gmail -> wolftype
 *   Organization:  
 *
 * =====================================================================================
 */

//Include OpenGL for graphics and Glfw for windowing
#include <stdlib.h>
#define GLEW_STATIC
#include <GL/glew.h>
//GLFW to creat a window
#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]){

    GLFWwindow * window;
    if (!glfwInit()) exit(EXIT_FAILURE);
    int w = 1024;
    int h =768;
    window = glfwCreateWindow(w,h,"glfw",nullptr,nullptr);
    if (!window) {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
  glfwMakeContextCurrent(window);

  glewExperimental = true;
  GLenum glewError = glewInit();
  if(glewError != GLEW_OK){
      printf("glew init erroe\n%s\n",glewGetErrorString(glewError));
  }

  if (!GLEW_VERSION_4_0)
  {
      printf("OPENGL 4.0 is not supported !n");
      return false;

  }

  const GLubyte * p= glGetString(GL_VERSION);
  cout <<"Graphics Driver: " << p <<endl;
  const GLubyte * q = glGetString(GL_SHADING_LANGUAGE_VERSION);
  cout << "GLSL Version: " << q << endl;

  if(GLEW_ARB_vertex_array_object){
      printf("genVertexArrays Supported\n");
  }

  if(GLEW_APPLE_vertex_array_object){
      printf("genVertexArrayAPPLE supported\n");
  }

  while(!glfwWindowShouldClose(window)){
      glViewport(0,0,w,h);
      glClearColor(1,0,0,1);
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

      //we draw something here
      glfwSwapBuffers(window); //SWAP Buffers
      glfwPollEvents(); //Listen for windows events


  }

  glfwDestroyWindow(window);
  glfwTerminate();
    
  //Get Version String
  //const GLubyte * p = glGetString(GL_VERSION);
  //cout << "OpenGL Version: " << p << endl;
  return 0;
}



