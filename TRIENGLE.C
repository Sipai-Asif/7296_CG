#include<graphics.h>
#include<conio.h>
int main()
{
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     setcolor(LIGHTBLUE);
     line(300,200,250,100);
     line(200,200,300,200);
     line(200,200,250,100);
     getch();
     closegraph();
     return 0;
}