#include<graphics.h>
#include<conio.h>
int main()
{
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     setcolor(LIGHTBLUE);
     line(200,300,200,100);
     line(100,200,300,200);
     circle(200,200,100);
     getch();
     closegraph();
     return 0;
}