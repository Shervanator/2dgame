#include <GLFW/glfw3.h>

class Window
{
public:
  Window(int width, int height, char *title);
  ~Window(void);

  bool shouldClose(void);
  void swapBuffer(void);

private:
  GLFWwindow* window;
};