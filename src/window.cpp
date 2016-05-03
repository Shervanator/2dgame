#include "window.h"

#include "logger.h"

Window::Window(int width, int height, char *title) {
  if (!glfwInit()) {
    log_err("Could not init window");
  }

  window = glfwCreateWindow(width, height, title, NULL, NULL);
  if (!window)
  {
    glfwTerminate();
    log_err("Could not init window");
  }

  glfwMakeContextCurrent(window);
}

Window::~Window(void) {
  glfwTerminate();
}

bool Window::shouldClose(void) {
  return glfwWindowShouldClose(window);
}

void Window::swapBuffer(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  glfwSwapBuffers(window);
  glfwPollEvents();
}


// GLFWwindow* window;
//
// /* Initialize the library */
// if (!glfwInit())
//   return -1;
//
// /* Create a windowed mode window and its OpenGL context */
// window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
// if (!window)
// {
//   glfwTerminate();
//   return -1;
// }
//
// /* Make the window's context current */
// glfwMakeContextCurrent(window);
//
// /* Loop until the user closes the window */
// while (!glfwWindowShouldClose(window))
// {
//   /* Render here */
//   glClear(GL_COLOR_BUFFER_BIT);
//
//   /* Swap front and back buffers */
//   glfwSwapBuffers(window);
//
//   /* Poll for and process events */
//   glfwPollEvents();
// }
//
// glfwTerminate();
