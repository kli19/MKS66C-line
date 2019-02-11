#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);
  
  for (int i = 0; i <= XRES; i+=50){
    draw_line(i, 0, XRES - i, YRES, s, c);
    draw_line(0, i, XRES, YRES - i, s, c);
  }
  

  int centerX = XRES / 2;
  int centerY = YRES / 2;

  display(s);
  save_extension(s, "lines.png");
}
