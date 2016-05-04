#include "window.h"

#include "logger.h"

#include <stdexcept>

Window::Window(int width, int height, const char *title) {
  window = nullptr;

  window = glfwCreateWindow(width, height, title, NULL, NULL);
  if (!window)
  {
    throw std::runtime_error("Could not init window");
  }
}

Window::~Window(void) {
  log_info("HERE");
  if (window != nullptr) {
    glfwDestroyWindow(window);
  }
}

bool Window::shouldClose(void) {
  return glfwWindowShouldClose(window);
}

void Window::swapBuffer(void) {
  glfwSwapBuffers(window);
  glfwPollEvents();
}

void Window::setCurrentContext(void) {
  glfwMakeContextCurrent(window);
}
