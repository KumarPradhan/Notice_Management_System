//program of notice board management system
#include<iostream>
#include<malloc.h>
#include<dos.h>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<graphics.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void intro(void);
int main_menu(void);
void process(void);
int main()
{
intro();
process();
return 0;
}

void process(void)
{
int option;
option=main_menu();
exit(0);
}
//creating intro function
void intro(void)
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"..\\BGI");
initwindow(1000,600,"insert image");
    readimagefile("c.jpg",370,50,630,280);
    settextstyle(1,0,3);
    setcolor(LIGHTGRAY);
    outtextxy(240,310,"PURBANCHAL UNIVERSITY");
    outtextxy(240,340,"__________________________");
    outtextxy(265,370,"sitapaila, kathmandu NEPAL");
    outtextxy(120,460,"NOTICE BOARD MANAGEMENT SYSTEM");
    getch();
    closegraph();
}
// ----------------- m a i n - m e n u ---------------------
int main_menu(void)
{
int option;
int size;
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\bgi");
initwindow(1000,600,"Windows BGI");
void *main_window,*button_down;
size=imagesize(10,70,251,351);
main_window=malloc(size);
size=imagesize(10,310,251,351);
button_down=malloc(size);
setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,600,999);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,590);
line(1,1,990,1);
setcolor(BLUE);
rectangle(3,3,990,15);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
rectangle(620,4,635,14);
rectangle(602,4,617,14);
rectangle(585,4,599,14);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(586,6,DARKGRAY);
floodfill(604,6,DARKGRAY);
floodfill(624,6,DARKGRAY);
setcolor(BLACK);
line(622,6,633,12);
line(633,6,622,12);
rectangle(604,6,615,12);
line(587,12,597,12);
setcolor(WHITE);
line(620,4,620,14);
line(620,4,635,4);
line(602,4,617,4);
line(602,4,602,14);
line(584,4,599,4);
line(584,4,584,14);
outtextxy(8,5,"N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M");
setcolor(WHITE);
line(5,30,635,30);
line(5,60,635,60);
setcolor(DARKGRAY);
line(5,29,635,29);
line(5,59,635,59);
setcolor(DARKGRAY);
//setbkcolor(DARKGRAY);
outtextxy(40,40,"N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C");
rectangle(10,70,200,100);
setcolor(WHITE);
line(9,69,9,99);
line(10,69,200,69);
setcolor(BLACK);
floodfill(60,100,DARKGRAY);
outtextxy(30,80,"M A I N   M E N U");
setcolor(DARKGRAY);
rectangle(10,110,250,150);
setcolor(BLACK);
rectangle(10,110,251,151);
setcolor(WHITE);
line(10,110,10,150);
line(10,110,250,110);
setcolor(BLACK);
outtextxy(40,130,"1.  N O T I C E");
setcolor(DARKGRAY);
rectangle(10,160,250,200);
setcolor(BLACK);
rectangle(10,160,251,201);
setcolor(WHITE);
line(10,160,10,200);
line(10,160,250,160);
setcolor(BLACK);
outtextxy(40,180,"2.  A D M I N  L O G I N");
setcolor(DARKGRAY);
rectangle(10,210,250,250);
setcolor(BLACK);
rectangle(10,210,251,251);
setcolor(WHITE);
line(10,210,10,250);
line(10,210,250,210);
setcolor(BLACK);
outtextxy(40,230,"3.  F E E D B A C K S");
setcolor(DARKGRAY);
rectangle(10,260,250,300);
setcolor(BLACK);
rectangle(10,260,251,301);
setcolor(WHITE);
line(10,260,10,300);
line(10,260,250,260);
setcolor(BLACK);
outtextxy(40,280,"4.  E X I T");
setcolor(LIGHTGRAY);
rectangle(10,310,250,350);
getimage(10,70,251,351,main_window);
setcolor(WHITE);
rectangle(10,310,251,351);
setcolor(DARKGRAY);
line(10,310,10,350);
line(11,311,11,350);
line(10,310,250,310);
line(11,311,250,311);
setcolor(BLACK);
getimage(10,310,251,351,button_down);
cleardevice();
setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,640,480);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,480);
line(1,1,640,1);
setcolor(BLUE);
rectangle(3,3,637,15);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
rectangle(620,4,635,14);
rectangle(602,4,617,14);
rectangle(585,4,599,14);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(586,6,DARKGRAY);
floodfill(604,6,DARKGRAY);
floodfill(624,6,DARKGRAY);
setcolor(BLACK);
line(622,6,633,12);
line(633,6,622,12);
rectangle(604,6,615,12);
line(587,12,597,12);
setcolor(WHITE);
line(620,4,620,14);
line(620,4,635,4);
line(602,4,617,4);
line(602,4,602,14);
line(584,4,599,4);
line(584,4,584,14);
outtextxy(8,5,"N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M");
setcolor(WHITE);
line(5,30,635,30);
line(5,60,635,60);
setcolor(DARKGRAY);
line(5,29,635,29);
line(5,59,635,59);
setcolor(DARKGRAY);
outtextxy(40,40,"N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C");
putimage(10,70,main_window,COPY_PUT);
char check;
//setcolor(BLACK);
check=getch();
if(check==49)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,130,"1.  N O T I C E");
option=1;
delay(600);
}
if(check==50)
{
putimage(10,160,button_down,COPY_PUT);
outtextxy(40,180,"2.  A D M I N  L O G I N");
option=2;
delay(600);
}
if(check==51)
{
putimage(10,210,button_down,COPY_PUT);
outtextxy(40,230,"3.  F E E D B A C K S");
option=3;
delay(600);
}
if(check==52)
{
putimage(10,260,button_down,COPY_PUT);
outtextxy(40,280,"4.  E X I T");
option=4;
delay(600);
}
free(main_window);
free(button_down);
cleardevice();
closegraph();
return(option);
}
void new_account(void)
{
int withdraw=0;
int deposit=0;
int account_no=888;
int balance=0;
char address[25];
char name[10]={'D','E','F','A','U','L','T'};
struct date *dat;
//getdate(&dat);
//account_no=getaccount_no(name);
//int year=dat.da_year;
//int day=dat.da_day;
//int month=dat.da_mon;
--account_no;
//new_account_gui();
gotoxy(20,9);
cout<<account_no;
gotoxy(42,9);
cout<<day<<" of "<<month<<" "<<year;
gotoxy(40,13);
cout<<" ";
cin>>name;
gotoxy(40,17);
cout<<" ";
cin>>balance;
gotoxy(40,21);
cout<<" ";
cin>>address;
sav_account(account_no,name,balance,address,day,month,year,deposit,withdraw);
cleardevice();
closegraph();
process();
}
