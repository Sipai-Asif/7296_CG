#include<graphics.h>
#include<conio.h>
int main()
{
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     setcolor(LIGHTBLUE);
     circle(200,200,100);
     circle(200,200,150);
     circle(200,200,200);
     getch();
     closegraph();
     return 0;
}