

#include <graphics.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /* Main Diamond */
    line(320, 100, 400, 200);
    line(400, 200, 320, 300);
    line(320, 300, 240, 200);
    line(240, 200, 320, 100);

    /* Inside Cross Lines */
    line(320, 100, 320, 300);
    line(240, 200, 400, 200);

    /* Tail Triangle */
    line(320, 300, 310, 330);
    line(310, 330, 330, 330);
    line(330, 330, 320, 300);

    getch();
    closegraph();
}




