#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {
  time_t currentTime = time(NULL);
  srand(currentTime);

  screen s;
  color c;

  clear_screen(s);

  int centerX = XRES/2;
  int centerY = YRES/2;

  c.red = 255;
  c.green = 0;
  c.blue = 0;
  
  for (int x=0, y=0;x<= XRES && y<+ YRES; x+=20, y+=20){
    draw_line(centerX+x, centerY+y, centerX+y, centerY-x, s, c);
    draw_line(centerX+y, centerY-x, centerX-x, centerY-y, s, c);
    draw_line(centerX-x, centerY-y, centerX-y, centerY+x, s, c);
    draw_line(centerX-y, centerY+x, centerX+x, centerY+y, s, c);
  }

  c.red = 0;
  c.green = 255;
  c.blue = 0;
  
  for (int x=0, y=0;x<= XRES && y<+ YRES; x+=10, y+=20){
    draw_line(centerX+x, centerY+y, centerX+y, centerY-x, s, c);
    draw_line(centerX+y, centerY-x, centerX-x, centerY-y, s, c);
    draw_line(centerX-x, centerY-y, centerX-y, centerY+x, s, c);
    draw_line(centerX-y, centerY+x, centerX+x, centerY+y, s, c);
  }

  c.red = 0;
  c.green = 0;
  c.blue = 255;
  
  for (int x=0, y=0;x<= XRES && y<+ YRES; x+=20, y+=10){
    draw_line(centerX+x, centerY+y, centerX+y, centerY-x, s, c);
    draw_line(centerX+y, centerY-x, centerX-x, centerY-y, s, c);
    draw_line(centerX-x, centerY-y, centerX-y, centerY+x, s, c);
    draw_line(centerX-y, centerY+x, centerX+x, centerY+y, s, c);
  }
  

  display(s);
  save_extension(s, "lines.png");
}
