#include<graphics.h>
#include<conio.h>
int main()
{
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     setcolor(LIGHTBLUE);
     arc(100,200,0,180,40);
     arc(100,200,0,180,60);
     arc(100,200,0,180,80);
     getch();
     closegraph();
     return 0;
}