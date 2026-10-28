#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\DI	setfillstyle(1,1);
	pieslice(300,250,0,60,100);
	setfillstyle(1,2);
	pieslice(300,250,60,160,100);
	setfillstyle(1,3);
	pieslice(300,250,160,220,100);
	setfillstyle(1,4);
	pieslice(300,250,220,360,100);

	settextstyle(2,HORIZ_DIR,4);
	setcolor(YELLOW);
	outtextxy(120,250,"ELECTRICITY");
	settextstyle(2,HORIZ_DIR,4);
	setcolor(BLUE);

	outtextxy(230,140,"RENT");
	settextstyle(2,HORIZ_DIR,4);
	setcolor(GREEN);

	outtextxy(400,200,"FOOD");
	settextstyle(2,HORIZ_DIR,4);
	setcolor(WHITE);

	outtextxy(300,365,"SAVINGS");
	settextstyle(1,HORIZ_DIR,4);
	setcolor(RED);
	outtextxy(220,50,"PIE-CHART");

	getch();
	closegraph();
}