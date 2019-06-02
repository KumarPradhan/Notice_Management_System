#include<iostream>
#include<graphics.h>
#include<conio.h>

using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:..\\bgi");
    arc(50,50,0,180,40);
    bar(100,100,150,150);
    getch();
    closegraph();
    return 0;
}
