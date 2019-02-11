#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {

  // swap start and end if not going left to right
  if (x1 < x0){
    int temp = x1;
    x1 = x0;
    x0 = temp;

    temp = y1;
    y1 = y0;
    y0 = temp;
  }

  //current point
  int x = x0;
  int y = y0;
  
  //dy
  int A = y1 - y0;
  
  //-dx
  int B = -(x1 - x0);

  

}
