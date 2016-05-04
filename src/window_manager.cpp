#include "window_manager.h"

#include <GLFW/glfw3.h>
#include <stdexcept>

WindowManager::WindowManager(void) {
  if (!glfwInit()) {
    throw std::runtime_error("Could not init window");
  }
}

WindowManager::~WindowManager(void) {
  glfwTerminate();
}

Window WindowManager::create(int width, int height, const char *title) {
  return Window(width, height, title);
}
