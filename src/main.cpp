#include "logger.h"
#include "window_manager.h"

int main(int argc, char **argv) {
  log_info("Game Initializing");

  WindowManager windowManager;

  Window window = windowManager.create(640, 480, "Game!");

  while (!window.shouldClose()) {
    // Do Game Logic
    // Do Input

    // Do Rendering
    glClear(GL_COLOR_BUFFER_BIT);

    window.swapBuffer();
  }

  return 0;
}
