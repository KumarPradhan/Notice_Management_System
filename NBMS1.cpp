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
#include<time.h>
using namespace std;

void intro(void);
int main_menu(void);
int notice(void);
int admin_login(void);
void process(void);
int login(void);
int save_detail(char, char);
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(void)

{
intro();
process();
return 0;
}

void process(void)
{
int option;
option=main_menu();
if(option==1)
    notice();
if(option==2)
   admin_login();
//exit(0);
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
initwindow(1000,700,"Windows BGI");
void *main_window,*button_down;
size=imagesize(10,70,961,651);
main_window=malloc(size);
size=imagesize(10,110,961,651);
button_down=malloc(size);

setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,998,698);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,598);
line(1,1,998,1);
setcolor(BLUE);
rectangle(3,3,996,20);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
rectangle(980,4,995,18);
rectangle(930,4,945,18);
rectangle(880,4,895,18);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(932,4,DARKGRAY);
setcolor(BLACK);
line(982,6,993,16);
line(993,6,982,16);
rectangle(932,8,943,16);
line(882,12,892,12);
setcolor(WHITE);
line(982,4,997,4);
line(982,4,982,14);
line(930,4,945,4);
line(930,4,930,14);
line(880,4,895,4);
line(880,4,880,14);
setbkcolor(BLUE);
outtextxy(8,5,"N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M");

setcolor(WHITE);
line(5,30,998,30);
line(5,60,998,60);
setcolor(DARKGRAY);
line(5,29,998,29);
line(5,59,998,59);
setcolor(BLACK);
setbkcolor(LIGHTGRAY);
outtextxy(8,40,"N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C");

setcolor(DARKGRAY);
rectangle(126,75,399,110);
setcolor(WHITE);
rectangle(127,76,398,109);
setcolor(DARKGRAY);
line(128,77,397,77);
line(128,108,397,108);
setcolor(BLACK);
outtextxy(180,85,"M A I N   M E N U");

readimagefile("no.jpg",125,120,400,300);
setcolor(DARKGRAY);
rectangle(125,120,400,300);
rectangle(126,121,401,301);
rectangle(125,120,400,350);
rectangle(126,120,401,351);
setcolor(WHITE);
rectangle(127,302,399,349);
setcolor(BLACK);
outtextxy(230,320," N O T I C E ");

readimagefile("ad.jpg",600,120,875,300);
setcolor(DARKGRAY);
rectangle(600,120,875,300);
rectangle(601,121,876,301);
rectangle(600,120,875,350);
rectangle(601,120,876,351);
setcolor(WHITE);
rectangle(602,302,874,349);
setcolor(BLACK);
outtextxy(680,320," A D M I N  L O G I N ");

readimagefile("ex.jpg",125,400,400,580);
setcolor(DARKGRAY);
rectangle(125,400,400,580);
rectangle(126,401,401,581);
rectangle(125,400,400,630);
rectangle(126,400,401,631);
setcolor(WHITE);
rectangle(127,582,399,629);
setcolor(BLACK);
outtextxy(230,600," E X I T ");

setcolor(LIGHTGRAY);
rectangle(125,120,960,650);
getimage(10,70,961,651,main_window);
setcolor(WHITE);
rectangle(125,120,961,651);
setcolor(DARKGRAY);
line(125,120,125,650);
line(125,121,126,650);
line(125,120,960,120);
line(125,121,960,121);
setcolor(BLACK);
getimage(125,120,961,651,button_down);
cleardevice();
setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,999,699);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,598);
line(1,1,998,1);
setcolor(BLUE);
rectangle(3,3,996,20);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
rectangle(980,4,995,18);
rectangle(930,4,945,18);
rectangle(880,4,895,18);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(932,4,DARKGRAY);
setcolor(BLACK);
line(982,6,993,16);
line(993,6,982,16);
rectangle(932,8,943,16);
line(882,12,892,12);
setcolor(WHITE);
line(982,4,997,4);
line(982,4,982,14);
line(930,4,945,4);
line(930,4,930,14);
line(880,4,895,4);
line(880,4,880,14);
setbkcolor(BLUE);
outtextxy(8,5,"N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M");

setcolor(WHITE);
line(5,30,998,30);
line(5,60,998,60);
setcolor(DARKGRAY);
line(5,29,998,29);
line(5,59,998,59);
setcolor(BLACK);
setbkcolor(LIGHTGRAY);
outtextxy(8,40,"N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C");

putimage(10,70,main_window,COPY_PUT);
char check;
setcolor(BLACK);
check=getch();
if(check==49)
{
putimage(125,120,button_down,COPY_PUT);
setcolor(DARKGRAY);
rectangle(127,302,399,349);
outtextxy(230,320," N O T I C E ");
option=1;
delay(600);
}
if(check==50)
{
putimage(125,120,button_down,COPY_PUT);
setcolor(RED);
rectangle(601,302,874,349);
outtextxy(680,320," A D M I N  L O G I N ");
option=2;
delay(600);
}
if(check==51)
{
putimage(125,120,button_down,COPY_PUT);
setcolor(RED);
rectangle(190,590,330,620);
outtextxy(230,600," E X I T ");
option=3;
delay(600);
}
free(main_window);
free(button_down);
cleardevice();
closegraph();
return(option);
}

int notice(void)
{
int option;
int size;
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\bgi");
initwindow(1000,700,"Windows BGI");
void *main_window,*button_down;
size=imagesize(10,70,961,651);
main_window=malloc(size);
size=imagesize(10,110,961,651);
button_down=malloc(size);

setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,998,698);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,698);
line(1,1,998,1);
setcolor(BLUE);
rectangle(3,3,996,20);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
rectangle(980,4,995,18);
rectangle(930,4,945,18);
rectangle(880,4,895,18);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(932,4,DARKGRAY);
setcolor(BLACK);
line(982,6,993,16);
line(993,6,982,16);
rectangle(932,8,943,16);
line(882,12,892,12);
setcolor(WHITE);
line(982,4,997,4);
line(982,4,982,14);
line(930,4,945,4);
line(930,4,930,14);
line(880,4,895,4);
line(880,4,880,14);
setbkcolor(BLUE);
outtextxy(8,5,"N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M");

setcolor(WHITE);
line(5,30,998,30);
line(5,60,998,60);
setcolor(DARKGRAY);
line(5,29,998,29);
line(5,59,998,59);
setcolor(BLACK);
setbkcolor(LIGHTGRAY);
outtextxy(8,40,"N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C");

setcolor(DARKGRAY);
rectangle(9,75,999,699);
setcolor(WHITE);
rectangle(9,76,998,698);
setcolor(DARKGRAY);
line(9,77,997,77);
line(10,108,997,108);
setcolor(BLACK);
outtextxy(18,85," N O T I C E ");

setcolor(DARKGRAY);
rectangle(12,125,350,170);
setcolor(BLACK);
rectangle(12,125,351,171);
setcolor(WHITE);
line(12,125,12,170);
line(12,125,350,125);
setcolor(BLACK);
outtextxy(40,140," N E W S  &  E V E N T S ");

setcolor(DARKGRAY);
rectangle(12,190,350,235);
setcolor(BLACK);
rectangle(12,190,351,236);
setcolor(WHITE);
line(12,190,12,235);
line(12,190,350,190);
setcolor(BLACK);
outtextxy(40,205," A C A D E M I C  P R O G R A M S ");

setcolor(DARKGRAY);
rectangle(12,255,350,300);
setcolor(BLACK);
rectangle(12,255,351,301);
setcolor(WHITE);
line(12,255,12,300);
line(12,255,350,255);
setcolor(BLACK);
outtextxy(40,270," E X A M  R O U T I N E S ");

setcolor(DARKGRAY);
rectangle(12,320,350,365);
setcolor(BLACK);
rectangle(12,320,351,366);
setcolor(WHITE);
line(12,320,12,365);
line(12,320,350,320);
setcolor(BLACK);
outtextxy(40,335," R E S U L T S ");

setcolor(DARKGRAY);
rectangle(12,385,350,430);
setcolor(BLACK);
rectangle(12,385,351,431);
setcolor(WHITE);
line(12,385,12,430);
line(12,385,350,385);
setcolor(BLACK);
outtextxy(40,400," C L A S S   R O U T I N E S ");

setcolor(LIGHTGRAY);
rectangle(10,110,960,650);
getimage(10,70,961,651,main_window);
setcolor(WHITE);
rectangle(10,110,961,651);
setcolor(DARKGRAY);
line(10,110,10,650);
line(10,111,11,650);
line(10,110,960,110);
line(10,111,960,111);
setcolor(BLACK);
getimage(10,110,961,651,button_down);
cleardevice();
setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,999,699);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,598);
line(1,1,998,1);
setcolor(BLUE);
rectangle(3,3,996,20);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
rectangle(980,4,995,18);
rectangle(930,4,945,18);
rectangle(880,4,895,18);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(932,4,DARKGRAY);
setcolor(BLACK);
line(982,6,993,16);
line(993,6,982,16);
rectangle(932,8,943,16);
line(882,12,892,12);
setcolor(WHITE);
line(982,4,997,4);
line(982,4,982,14);
line(930,4,945,4);
line(930,4,930,14);
line(880,4,895,4);
line(880,4,880,14);
setbkcolor(BLUE);
outtextxy(8,5,"N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M");

setcolor(WHITE);
line(5,30,998,30);
line(5,60,998,60);
setcolor(DARKGRAY);
line(5,29,998,29);
line(5,59,998,59);
setcolor(BLACK);
setbkcolor(LIGHTGRAY);
outtextxy(8,40,"N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C");

putimage(10,70,main_window,COPY_PUT);
char check;
setcolor(BLACK);
check=getch();
if(check==49)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,140," N E W S  &  E V E N T S ");
option=1;
delay(600);
}
if(check==50)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,205," A C A D E M I C  P R O G R A M S ");
option=2;
delay(600);
}
if(check==51)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,270," E X A M  R O U T I N E S ");
option=3;
delay(600);
}
if(check==52)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,335," R E S U L T S ");
option=4;
delay(600);
}
if(check==53)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,400," C L A S S  R O U T I N E S ");
option=5;
delay(600);
}
free(main_window);
free(button_down);
cleardevice();
closegraph();
return(option);
}
int admin_login(void)
{
//int option;
int size;
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\bgi");
initwindow(1000,700,"Windows BGI");
void *main_window,*button_down;
size=imagesize(10,70,961,651);
main_window=malloc(size);
size=imagesize(10,110,961,651);
button_down=malloc(size);
setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,998,698);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,598);
line(1,1,998,1);
setcolor(BLUE);
rectangle(3,3,996,20);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
//setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(980,4,995,18);
//floodfill(981,5,LIGHTGRAY);
rectangle(930,4,945,18);
rectangle(880,4,895,18);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(932,4,DARKGRAY);
setcolor(BLACK);
line(982,6,993,16);
line(993,6,982,16);
rectangle(932,8,943,16);
line(882,12,892,12);
setcolor(WHITE);
line(982,4,997,4);
line(982,4,982,14);
line(930,4,945,4);
line(930,4,930,14);
line(880,4,895,4);
line(880,4,880,14);
setbkcolor(BLUE);
outtextxy(8,5," N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M ");

setcolor(WHITE);
line(5,30,998,30);
line(5,60,998,60);
setcolor(DARKGRAY);
line(5,29,998,29);
line(5,59,998,59);
setcolor(BLACK);
setbkcolor(LIGHTGRAY);
outtextxy(8,40," N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C ");

setcolor(DARKGRAY);
rectangle(9,75,999,699);
setcolor(WHITE);
rectangle(9,76,998,698);
setcolor(DARKGRAY);
line(9,77,997,77);
line(10,108,997,108);
setcolor(BLACK);
outtextxy(18,85," A D M I N  L O G I N ");

setcolor(DARKGRAY);
rectangle(124,150,600,500);
setcolor(BLACK);
rectangle(124,150,601,501);
setcolor(WHITE);
line(124,150,599,150);
line(124,150,124,500);
line(124,171,599,171);
setcolor(BLACK);
outtextxy(300,165," LOG IN DETAILS ");

setfillstyle(SOLID_FILL,WHITE);
setcolor(DARKGRAY);
rectangle(250,250,590,290);
setcolor(BLACK);
rectangle(250,250,591,291);
floodfill(251,251,BLACK);
setcolor(WHITE);
line(250,250,590,250);
line(250,250,250,290);
setcolor(BLACK);
outtextxy(150,260," USERNAME:");
outtextxy(250,310,"( enter username and press enter ) ");

setfillstyle(SOLID_FILL,WHITE);
setcolor(DARKGRAY);
rectangle(250,360,590,400);
setcolor(BLACK);
rectangle(250,360,591,401);
floodfill(251,361,BLACK);
setcolor(WHITE);
line(250,360,590,360);
line(250,360,250,400);
setcolor(BLACK);
outtextxy(150,370," PASSWORD: ");
outtextxy(250,420,"( 8 characters only ) ");

setcolor(LIGHTGRAY);
rectangle(10,110,960,650);
getimage(10,70,961,651,main_window);
setcolor(WHITE);
rectangle(10,110,961,651);
setcolor(DARKGRAY);
line(10,110,10,650);
line(10,111,11,650);
line(10,110,960,110);
line(10,111,960,111);
setcolor(BLACK);
getimage(10,110,961,651,button_down);
cleardevice();
setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,999,699);
floodfill(3,3,DARKGRAY);
setcolor(WHITE);
line(1,1,1,598);
line(1,1,998,1);
setcolor(BLUE);
rectangle(3,3,996,20);
setfillstyle(SOLID_FILL,BLUE);
floodfill(5,5,BLUE);
setcolor(DARKGRAY);
rectangle(980,4,995,18);
rectangle(930,4,945,18);
rectangle(880,4,895,18);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(932,4,DARKGRAY);
setcolor(BLACK);
line(982,6,993,16);
line(993,6,982,16);
rectangle(932,8,943,16);
line(882,12,892,12);
setcolor(WHITE);
line(982,4,997,4);
line(982,4,982,14);
line(930,4,945,4);
line(930,4,930,14);
line(880,4,895,4);
line(880,4,880,14);
setbkcolor(BLUE);
outtextxy(8,5,"N O T I C E  B O A R D  M A N A G E M E N T  S Y S T E M");

setcolor(WHITE);
line(5,30,998,30);
line(5,60,998,60);
setcolor(DARKGRAY);
line(5,29,998,29);
line(5,59,998,59);
setcolor(BLACK);
setbkcolor(LIGHTGRAY);
outtextxy(8,40,"N O T I C E  M A N A G E M E N T   S Y S T E M  D E S I G N E D  F O R  A E C");

putimage(10,70,main_window,COPY_PUT);
char check;
setcolor(BLACK);
check=getch();
if(check==49)
{
putimage(125,120,button_down,COPY_PUT);
setcolor(RED);
rectangle(200,310,350,340);
outtextxy(18,85," A D M I N  L O G I N ");

//option=1;
//delay(600);
login();
}
free(main_window);
free(button_down);
cleardevice();
closegraph();
//return(option);
}
int login(void)
{
 //int gd=DETECT,gm;
 //initgraph(&gd,&gm,"..\\bgi");
 //initwindow(1000,700,"Windows BGI");
 char u[20]="admin",p[20]="acme123";
 char a[100]="you are logged in!";
 char b[100]="you are not logged in!";
 char c[100]="enter your username and password again";
 char user[20], pass[20];

gotoxy(25,10);
cout<<"Username:";
gets(user);

gotoxy(25,12);
cout<<"Password:";
gets(pass);

descision:if(strcmp(u,user)==0 && strcmp(p,pass)==0)
{
    setcolor(BLACK);
    gotoxy(25,15);
    cout<<a;
    admin_login();
    notice();
}
else
{
    gotoxy(25,15);
    cout<<b;

    gotoxy(25,16);
    cout<<c;

    gotoxy(25,10);
    cout<<"Username:";
    gets(user);

    gotoxy(25,12);
    cout<<"Password:";
    gets(pass);
    goto descision;
}
}

