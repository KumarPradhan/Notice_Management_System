#include <graphics.h>
#include <dos.h>
#include <iostream>
#include <fstream>
#include <process.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>

using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

	void gra1();
	void gra2();			//Program segment to display some graphic
	void box(int,int);

	// THIS CLASS CONTAINS FUNCTIONS RELATED TO DRAW BOX ETC.

class shape
{
	public :					   //Public member functions
		void line_hor(int, int, int, char) ;
		void line_ver(int, int, int, char) ;
		void box(int,int,int,int,char) ;
} ;


	// THIS CLASS CONTROL ALL THE FUNCTIONS IN THE MENU


class control
{
	public :
		void main_menu(void) ;	     //Public member functions
		void help(void) ;
	private :
		void edit_menu(void) ;       //Private member functions

} ;

// THIS CLASS CONTAINS FUNCTIONS RELATED TO INITIAL DEPOSIT

class Notice
{
	public :
		void news_events(void) ;
		void display(void) ;
		void academic_pro(void) ;
		void routines(void) ;
		void results(void) ;
		void feedbacks(void) ;
        void quit() ;
} ;

// THIS CLASS CONTAINS FUNCTIONS RELATED TO TRANSACTIONS

class Admin
{
    public:
        void  admin_login(void) ;
		void update_news_events(void) ;
		void displaying(void) ;
		void update_academic_pro(void) ;
		void update_routines(void) ;
		void update_results(void) ;
		void update_feedbacks(void) ;
        void quit() ;
} ;

// CLASS SHAPE :: FUNCTION TO DRAW HORIZONTAL LINE

void shape :: line_hor(int column1, int column2, int row, char c)
{
	for ( column1; column1<=column2; column1++ )
	{
		gotoxy(column1,row) ;
		cout <<c ;
	}
}

// CLASS SHAPE :: FUNCTION TO DRAW VERTICAL LINE

void shape :: line_ver(int row1, int row2, int column, char c)
{

	for ( row1; row1<=row2; row1++ )
	{
		gotoxy(column,row1) ;
		cout <<c ;
	}
}

// CLASS SHAPE :: FUNCTION TO DRAW BOX LINE

void shape :: box(int column1, int row1, int column2, int row2, char c)
{
	char ch=218 ;
	char c1, c2, c3, c4 ;
	char l1=196, l2=179 ;
	if (c == ch)
	{
		c1=218 ;
		c2=191 ;
		c3=192 ;
		c4=217 ;
		l1 = 196 ;
		l2 = 179 ;
	}
	else
	{
		c1=c ;
		c2=c ;
		c3=c ;
		c4=c ;
		l1 = c ;
		l2 = c ;
	}
	gotoxy(column1,row1) ;
	cout <<c1 ;
	gotoxy(column2,row1) ;
	cout <<c2 ;
	gotoxy(column1,row2) ;
	cout <<c3 ;
	gotoxy(column2,row2) ;
	cout <<c4 ;
	column1++ ;
	column2-- ;
	line_hor(column1,column2,row1,l1) ;
	line_hor(column1,column2,row2,l1) ;
	column1-- ;
	column2++ ;
	row1++ ;
	row2-- ;
	line_ver(row1,row2,column1,l2) ;
	line_ver(row1,row2,column2,l2) ;
}
//************************************************************************
/*
// CLASS CONTROL :: FUNCTION TO DISPLAY MAIN MENU AND CALL OTHER FUNCTIONS
//************************************************************************
*/


/*void control :: main_menu(void)
{
void selected(int);
void toggle(int,int);
	char m1[]="1:\tSEE ACCOUNT     ",m2[]="2:\tLIST OF ACCOUNTS",m3[]="3:\tTRANSACTIONS    ",
	 m4[]="4:\tOPEN NEW ACCOUNT",m5[]="5:\tEDIT ACCOUNT	",m6[]="6:\tHELP",
	 m7[]="7:\tQUIT            ";
	static int counter=0;
	while(1)
	{
	int gd=DETECT,gm=DETECT;
	initgraph(&gd,&gm,"C:..\\BGI");
	counter++;
	setfillstyle(1,7);
	floodfill(320,240,1);
	settextjustify(1,1);
	setcolor(8);
	settextstyle(7,0,0);
	setusercharsize(27,10,5,3);
	if (counter==1)
	{
		outtextxy(320,35,"B            ");  delay(200);
		outtextxy(320,35,"  A          ");  delay(200);
		outtextxy(320,35,"    N        ");  delay(200);
		outtextxy(320,35,"      K      ");  delay(200);
		outtextxy(320,35,"        I    ");  delay(200);
		outtextxy(320,35,"          N  ");  delay(200);
		outtextxy(320,35,"            G");
		for(int i=0,j=640;i<610;i++,j--)
		{
			//sound(2*i);
			setcolor(8);
			line(i,15,i-570,15);
			line(j,65,j+570,65);  delay(5);
			putpixel(i-570,15,7);
			putpixel(j+570,65,7);
		}
		//nosound();
	}
	else
	{
		setusercharsize(27,12,5,3);
		outtextxy(320,35,"B A N K I N G");
		setcolor(8);
		line(610,15,40,15);
		line(600,65,30,65);
	}
	settextstyle(7,1,5);
	outtextxy(90,270,"O P T I O N S");
	outtextxy(550,270,"O P T I O N S");
	settextstyle(1,0,2);
	char ch;
	int choice=1,temp;
	box(1,9);
	box(2,7);
	box(3,7);
	box(4,7);
	box(5,7);
	box(6,7);
	box(7,7);
	setcolor(1);
	outtextxy(320,90,m1);
	setcolor(15);
	outtextxy(320,150,m2);
	outtextxy(320,210,m3);
	outtextxy(320,270,m4);
	outtextxy(320,330,m5);
	outtextxy(320,390,m6);
	outtextxy(320,450,m7);
	//72  up
	//80  down
	//75  left
	//77  right
	//13  enter
	//49  1
	//71  Home
	//79  End
	//73 PgUp
	//81 PgDown
	//27 Escape
	do
	{
		temp=choice;
		ch=getch();
		switch (ch)
		{
			case 72:
			case 75: choice=((--choice+7)%7);
				 toggle(choice,temp);
				 continue;
			case 77:
			case 80: choice=(++choice%7);
				 toggle(choice,temp);
				 continue;
			case 73: choice=(choice+12)%7;
				 toggle(choice,temp);
				 break;
			case 81: choice=(choice+2)%7;
				 toggle(choice,temp);
				 break;
			case 71:
			case 49: choice=1;
				 toggle(choice,temp);
				 break;
			case 50: choice=2;
				 toggle(choice,temp);
				 break;
			case 51: choice=3;
				 toggle(choice,temp);
				 break;
			case 52: choice=4;
				 toggle(choice,temp);
				 break;
			case 53: choice=5;
				 toggle(choice,temp);
				 break;
			case 54: choice=6;
				 toggle(choice,temp);
				 break;
			case 79:
			case 55: choice=0;
				 toggle(choice,temp);
				 break;
			case 27: choice=0;
				 toggle(choice,temp);
			case 13: selected(choice);
				 delay(500);
		}
	}while (ch!=13&&ch!=27);
	for(int i=320;i>0;i--)
		{
		if((counter==1)||(choice==0))
		//sound(3*i);
		setcolor(1);
		line(320-i,0,320-i,480);
		line(320+i,0,320+i,480);
		line(0,320-i,640,320-i);
		line(0,160+i,640,160+i);
		delay(2);
		}
	//nosound();
	closegraph();
	if (choice == 1)
		{
			Admin a ;
			a.admin_login() ;
		}
		else
		if (choice == 2)
		{
			Notice n ;
			n.display() ;
		}
		else
		if (choice == 3)
		{
			Admin a ;
			a.update_news_events() ;
		}
		else
		if (choice == 4)
		{
			Admin a ;
			a.update_academic_pro() ;
		}
		else
		if (choice == 5)
			edit_menu() ;
		else
		if (choice == 6)
			help() ;
		else
		if (choice == 0)
		{
			break;
		}
		}
	}
void toggle(int i,int temp)
{
	char m1[]="1:\tSEE ACCOUNT     ",m2[]="2:\tLIST OF ACCOUNTS",m3[]="3:\tTRANSACTIONS    ",
	     m4[]="4:\tOPEN NEW ACCOUNT",m5[]="5:\tEDIT ACCOUNT	",m6[]="6:\tHELP",
	     m7[]="7:\tQUIT            ";
	if (i==0) i=7;
	if (temp==0) temp=7;
		box(temp,7);
	switch(temp)
	{
		case 1: box(1,7);
			setcolor(15);
			outtextxy(320,90,m1);
			break;
		case 2: box(2,7);
			setcolor(15);
			outtextxy(320,150,m2);
			break;
		case 3: box(3,7);
			setcolor(15);
			outtextxy(320,210,m3);
			break;
		case 4: box(4,7);
			setcolor(15);
			outtextxy(320,270,m4);
			break;
		case 5: box(5,7);
			setcolor(15);
			outtextxy(320,330,m5);
			break;
		case 6: box(6,7);
			setcolor(15);
			outtextxy(320,390,m6);
			break;
		case 7: box(7,7);
			setcolor(15);
			outtextxy(320,450,m7);
			break;
	}

	switch(i)
	{
		case 1: box(1,9);
			setcolor(1);
			outtextxy(320,90,m1);
			break;
		case 2: box(2,9);
			setcolor(1);
			outtextxy(320,150,m2);
			break;
		case 3: box(3,9);
			setcolor(1);
			outtextxy(320,210,m3);
			break;
		case 4: box(4,9);
			setcolor(1);
			outtextxy(320,270,m4);
			break;
		case 5: box(5,9);
			setcolor(1);
			outtextxy(320,330,m5);
			break;
		case 6: box(6,9);
			setcolor(1);
			outtextxy(320,390,m6);
			break;
		case 7: box(7,9);
			setcolor(1);
			outtextxy(320,450,m7);
			break;
	}
}
void selected(int i)
{
	if(i==0) i=7;
	delay(350);
	setcolor(0);
		line(180,60*(i+.5)-20,180,60*(i+.5)+20);
		line(180,60*(i+.5)-20,460,60*(i+.5)-20);
	setcolor(15);
		line(460,60*(i+.5)-20,460,60*(i+.5)+20);
		line(180,60*(i+.5)+20,460,60*(i+.5)+20);
		line(461,60*(i+.5)-20,461,60*(i+.5)+21);
		line(180,60*(i+.5)+21,461,60*(i+.5)+21);
	delay(350);
	setcolor(15);
		line(180,60*(i+.5)-20,180,60*(i+.5)+20);
		line(180,60*(i+.5)-20,460,60*(i+.5)-20);
	setcolor(0);
		line(460,60*(i+.5)-20,460,60*(i+.5)+20);
		line(180,60*(i+.5)+20,460,60*(i+.5)+20);
		line(461,60*(i+.5)-20,461,60*(i+.5)+21);
		line(180,60*(i+.5)+21,461,60*(i+.5)+21);
}
void box(int i,int color)
{
	setcolor(5);
		line(180,60*(i+.5)-20,180,60*(i+.5)+20);
		line(180,60*(i+.5)-20,460,60*(i+.5)-20);
		line(460,60*(i+.5)-20,460,60*(i+.5)+20);
		line(180,60*(i+.5)+20,460,60*(i+.5)+20);
	setfillstyle(1,color);
	floodfill(320,60*(i+.5),5);
	setcolor(15);
		line(180,60*(i+.5)-20,180,60*(i+.5)+20);
		line(180,60*(i+.5)-20,460,60*(i+.5)-20);
	setcolor(0);
		line(460,60*(i+.5)-20,460,60*(i+.5)+20);
		line(180,60*(i+.5)+20,460,60*(i+.5)+20);
		line(461,60*(i+.5)-20,461,60*(i+.5)+21);
		line(180,60*(i+.5)+21,461,60*(i+.5)+21);
}

// CLASS CONTROL :: FUNCTION TO DISPLAY EDIT MENU AND CALL OTHER FUNCTIONS

void control :: edit_menu(void)
{
	char ch ;
	while (1)
	{
		shape s ;
		s.box(10,5,71,21,219) ;
		s.box(9,4,72,22,218) ;
		setcolor(BLACK) ;
		setbkcolor(WHITE) ;
		gotoxy(34,10) ;
		cout<<(" EDIT MENU ") ;
		setcolor(LIGHTGRAY) ;
		setbkcolor(BLACK) ;
		gotoxy(31,12) ;
		cout <<"1: MODIFY ACCOUNT" ;
		gotoxy(31,13) ;
		cout <<"2: CLOSE ACCOUNT" ;
		gotoxy(31,14) ;
		cout <<"0: QUIT" ;
		gotoxy(31,16) ;
		cout <<"Enter your choice: " ;
		ch = getche() ;
		if (ch == 27)
			break ;
		else
		if (ch == '1')
		{
			Notice n ;
			n.news_events() ;
			break ;
		}
		else
		if (ch == '2')
		{
			Admin a ;
			a.update_academic_pro() ;
			break ;
		}
		else
		if (ch == '0')
			break ;
	}
}*/

// CLASS CONTROL :: FUNCTION TO DISPLAY HELP ABOUT PROJECT

void control :: help(void)
{
	shape s ;
	s.box(2,1,79,25,218) ;
	s.box(25,2,54,4,219) ;
	setcolor(LIGHTBLUE) ;
	gotoxy(27,3); cout<<("WELCOME TO SIMPLE BANKING") ;
	delay(10) ;
	setcolor(GREEN);
	gotoxy(10,5);  cout <<"   IN  THIS  PROJECT YOU CAN  KEEP  RECORD FOR DAILY ";
	delay(10) ;
	gotoxy(10,6);  cout <<"		BANKING  TRANSACTIONS. 	     " ;
	delay(10) ;
	gotoxy(10,8);  cout <<"- THIS  PROGRAM IS CAPABLE OF HOLDING ANY No. OF ACCOUNTS";
	delay(10) ;
	gotoxy(10,10); cout <<"-1.) In the first option the account of a particular person";
	delay(10) ;
	gotoxy(10,11); cout <<" is displayed by giving simply the account no. of that person." ;
	delay(10) ;
	gotoxy(10,13); cout <<"-2.) In second option you can see the list of all the accounts." ;
	delay(10) ;
	gotoxy(10,15); cout <<"-3.) Through third option you can do banking transactions" ;
	delay(10) ;
	gotoxy(10,16); cout <<"  (Deposit/Withdraw)." ;
	delay(10) ;
	gotoxy(10,18); cout <<"-4.) In Fourth option you can open new account." ;
	delay(10) ;
	gotoxy(10,19); cout <<"  (NOTE: Opening amount i.e. , the first deposit should not be " ;
	delay(10) ;
	gotoxy(10,20); cout <<" less than Rs.500/-";
	delay(10);
	gotoxy(10,22); cout <<"-5.) In Fifth option you can Modify or Delete any account." ;
	delay(10) ;
	gotoxy(10,23); cout <<"-6.) In sixth option the help menu is displayed";
	gotoxy(10,24); cout <<"-0.) This is the last option i.e., Quit (Exit to Dos).  " ;
	delay(10) ;
	setcolor(RED) ; setbkcolor(WHITE) ;
	gotoxy(26,25) ; cout<<(" Press a key to continue ") ;
	setcolor(LIGHTGRAY) ; setbkcolor(BLACK) ;
	gotoxy(25,2) ;
	getch() ;
	getch() ;
	for (int i=25; i>=1; i--)
	{
		delay(20) ;
		gotoxy(1,i) ; //clreol() ;
	}
}

// THIS IS MAIN FUNCTION CALLING HELP AND MAIN MENU FUNCTIONS

int main(void)			//Main segment
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "C:..\\BGI");
    char *password;
    int ch;
    char *a="acme123";
    setcolor(2);
    outtextxy(160,186,"Enter The Password:");
	line(150,170,440,170);
	line(150,210,440,210);
	line(440,210,440,170);
	line(150,170,150,210);

   password = gets("");

   ch=strcmp(a,password);
   if(ch>=0)
    {
    settextstyle(10,0,1);
    outtextxy(150,240,"Password Accepted !!!!!");
    outtextxy(110,278,"Welcome In Banking Project");
    delay(900);
    gra1();
    gra2();
    control c ;
    c.help() ;
    //c.main_menu() ;
   }
   else
   {
    settextstyle(10,0,1);
    outtextxy(150,240,"Invalid Password !!!!!!!!");
    outtextxy(80,278,"You Cannot Enter In The Project");
   }
getch();
//return 0;
}

//	   INDIVIDUAL FUNCTION DEFINITIONS

	void gra1()		//Function definition #1
	{
	int gd=DETECT,gm;
	char msg[33];
	initgraph(&gd,&gm,"C:..\\BGI");
	line(0,300,640,300);
	setcolor(15);               //start logo
	line(270,20,270,140);
	line(270,20,390,20);
	line(270,140,390,140);
	line(390,20,390,140);

	line(270,80,290,80);
	line(370,80,390,80);
	line(330,20,330,40);
	line(330,120,330,140);

	line(290,40,370,40);
	line(290,40,290,120);
	line(290,120,370,120);
	line(370,40,370,120);

	line(310,63,350,63);
	line(310,63,310,100);
	line(310,100,350,100);
	line(350,63,350,100);

	setfillstyle(1,9);
	floodfill(320,72,15);
	floodfill(315,90,15);
	floodfill(340,90,15);
	floodfill(335,65,15);

	setfillstyle(1,15);
	floodfill(360,100,15);
	floodfill(310,60,15);
	floodfill(300,100,15);
	floodfill(350,50,15);

	setfillstyle(1,4);
	floodfill(280,100,15);
	floodfill(300,30,15);
	floodfill(380,50,15);
	floodfill(340,130,15);

	settextjustify(1,1);
	settextstyle(10,0,7);
	setcolor(15);
	outtextxy(230,200,"H");
	outtextxy(290,200,"D");		//TO WRITE CITY
	outtextxy(350,200,"F");
	outtextxy(410,200,"C");


	setfillstyle(9,7);
	floodfill(410,250,15);
	floodfill(225,215,15);
	//floodfill(275,210,15);
	floodfill(350,215,15);	//TO FILL THE LETTERS HDFC
	floodfill(390,210,15);
	floodfill(423,205,15);
	floodfill(423,230,15);
	floodfill(270,244,15);
	floodfill(300,200,15);
	settextstyle(7,0,6);
	outtextxy(300,325,"BANK BRANCH");
	settextstyle(1,0,5);
	outtextxy(320,375,"BARMER");
	setcolor(15);
	line (320-150,420-13,320+150,420-13);
	line (320-150,420+12,320+150,420+12);
	line (320-150,420-13,320-150,420+12);
	line (320+150,420+12,320+150,420-13);
	int s=30,w;
	for (int
	x1=171,x2=171,y1=408,y2=431,y=1,S=0;x1<470;x1++,x2++,y++,S++)
		{
		settextstyle(8,0,2);
		setcolor(4);
		line (x1,y1,x2,y2);
		w=(x1-169)/3;
		for (int i=34; i<=78; i++)
		{
			gotoxy(i,23) ;
			cout <<" " ;
		}
		setcolor(15);
		outtextxy(310,440,"LOADING..");
		if (x2>270) s=45; if (x2>370) s=10;
		if (x2==320) delay(999); else
		delay(s);
		}
		delay(800);
		for (int i=27; i<=78; i++)
		{
			gotoxy(i,23) ;
			cout <<" " ;
		}

	settextstyle(2,0,5);
	outtextxy(320,460,"PRESS ANY KEY TO CONTINUE.... ");

	getch();


	}

	void gra2()        //Function definition
	{
    //To make a designer ellipse
	int gd=DETECT,gm;
	initgraph(&gd, &gm, "C:..\\BGI");
	setcolor(8);
	ellipse(320,240,0,360,300,150);
	settextstyle(10,0,4);
	settextjustify(1,1);
	setcolor(5);
	outtextxy(320,170,"SIMPLE BANKING");
	delay(250);
	settextstyle(4,0,4);
	setcolor(20);
	outtextxy(320,220,"Presented By:");
	delay(250);
	setcolor(9);
	settextstyle(10,0,4);
	outtextxy(320,315,"AND VISHAL");
	setcolor(2);
	delay(250);
	outtextxy(320,265,"SHUBHAM SHIVAM");
	for (int stangle=0;!kbhit();stangle++)
	{
		setcolor(7);
		ellipse(320,240,stangle,stangle+20,300,150);
		ellipse(320,240,stangle+180,stangle+200,300,150);
		delay(9);
		setcolor(8);
		ellipse(320,240,stangle-1,stangle+19,300,150);
		ellipse(320,240,stangle-1+180,stangle+199,300,150);
	}
	closegraph();

}

