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

  //octant I
  if (A >= 0 && A <= -B){
    int d = 2*A + B;
    while (x <= x1){
      plot(s, c, x, y);
      x++;
      d += 2*A;
      if(d >= 0){
	y++;
	d += 2*B;
      }
    }    
  }
  
  //octant II
  else if(A >= 0 && A >= -B){
    int d = A + 2*B;
    while (y <= y1){
      plot(s, c, x, y);
      y++;
      d += 2*B;
      if(d <= 0){
	x++;
	d += 2*A;
      }
    }
  }

  //octant VII
  else if (A <= 0 && A <=B){
    int d = A - 2*B;
    while (y >= y1){
      plot(s, c, x, y);
      y--;
      d -= 2*B;
      if (d >= 0){
	x++;
	d += 2*A;
      }
    }
  }


}
