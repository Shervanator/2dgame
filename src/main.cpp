#include "logger.h"
#include "window_manager.h"

int main(int argc, char **argv) {
  log_info("Game Initializing");

  WindowManager windowManager;

  Window window = windowManager.create(640, 480, "Game!");
  window.setCurrentContext();
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

  while (!window.shouldClose()) {    
    glClear(GL_COLOR_BUFFER_BIT);

    window.swapBuffer();
  }

  return 0;
}
