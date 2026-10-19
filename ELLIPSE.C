#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle = 0, endangle = 360;
   int xradius = 100, yradius = 50;

   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   ellipse(midx, midy, stangle, endangle,
	   xradius, yradius);

   getch();
   closegraph();
   return 0;
}
