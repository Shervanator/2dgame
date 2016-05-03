#include "logger.h"
#include "window.h"

int main(int argc, char **argv) {
  log_info("Game Initializing");

  // Create a window
  Window window(640, 480, "Game!");
  while (!window.shouldClose()) {
    // Do Game Logic
    // Do Input
    // Do Rendering

    window.swapBuffer();
  }

  return 0;
}
