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
