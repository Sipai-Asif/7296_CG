#include <graphics.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");


    /* Roof (Triangle) */
    line(320, 100, 200, 200);
    line(200, 200, 440, 200);
    line(440, 200, 320, 100);

    /* House Frame (Main Body Rectangle) */
    rectangle(220, 200, 420, 360);

    /* Door on the Left Side (Inner Rectangle) */
    rectangle(240, 270, 300, 360);

    /* Ground Line */
    line(150, 360, 490, 360);

    getch();
    closegraph();
}
