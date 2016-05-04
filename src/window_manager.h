#include "window.h"

class WindowManager {
public:
  WindowManager(void);
  ~WindowManager(void);

  Window create(int width, int height, const char *title);
};
