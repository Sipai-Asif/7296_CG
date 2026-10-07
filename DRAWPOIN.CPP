#include<graphics.h>
#include<conio.h>

int main()
{
 int gd = DETECT,gm;

 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 putpixel(300,250,BLUE);

 getch();

 closegraph();
 return 0;
 }