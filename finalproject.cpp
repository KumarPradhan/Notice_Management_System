//*******************************************************************************************************
//--------- PROGRAM OF NOTICE BOARD MANAGEMENT SYSTEM OF ACME ENGINEERING COLLAGE -----------------------
//*******************************************************************************************************
#include<iostream>
#include<malloc.h>
#include<dos.h>
#include<fstream>
#include<stdlib.h>
#include<cstring>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<iomanip>

using namespace std;

int process(void);
int process1(void);
int process2(void);
int process3(void);
int process4(void);
int process5(void);
int delete_news();
int delete_academic();
int delete_exam();
int delete_results();
int delete_class();
void update_news();
void update_academic();
void update_exam();
void update_results();
void update_class();
int change_password();
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// THIS CLASS CONTAINS FUNCTIONS RELATED TO ADMIN

class Notice
{
	public :
		int news_events(void);
		int academic_pro(void);
        int exam_routines(void);
		int results(void);
		int class_routines(void);
} ;

// THIS CLASS CONTAINS FUNCTIONS RELATED TO ADMIN

class Admin
{
    public:
        int  admin_login(void) ;
		int update_news_events(void) ;
		int update_academic_pro(void) ;
		int update_exam_routines(void) ;
		int update_results(void) ;
		int update_class_routines(void) ;
} ;

class Control
{
public:
    void intro(void);
    int main_menu(void);
    int update_notice(void);
};

//creating intro function
void Control::intro(void)
{
setfillstyle(SOLID_FILL,LIGHTGRAY);
setcolor(DARKGRAY);
rectangle(1,1,998,698);
initwindow(1000,700,"insert image");
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
int Control:: main_menu(void)
{
int option;
int size;
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

//---------------UPDATE NOTICE---------------------

int Control:: update_notice()
{
    int size;
    int option;
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
outtextxy(18,85," U P D A T E  N O T I C E ");

setcolor(DARKGRAY);
rectangle(12,125,350,170);
setcolor(BLACK);
rectangle(12,125,351,171);
setcolor(WHITE);
line(12,125,12,170);
line(12,125,350,125);
setcolor(BLACK);
outtextxy(40,140," A D D  N O T I C E ");

setcolor(DARKGRAY);
rectangle(12,190,350,235);
setcolor(BLACK);
rectangle(12,190,351,236);
setcolor(WHITE);
line(12,190,12,235);
line(12,190,350,190);
setcolor(BLACK);
outtextxy(40,205," E D I T  N O T I C E ");

setcolor(DARKGRAY);
rectangle(12,255,350,300);
setcolor(BLACK);
rectangle(12,255,351,301);
setcolor(WHITE);
line(12,255,12,300);
line(12,255,350,255);
setcolor(BLACK);
outtextxy(40,270," D E L E T E  N O T I C E ");

setcolor(DARKGRAY);
rectangle(12,320,350,365);
setcolor(BLACK);
rectangle(12,320,351,366);
setcolor(WHITE);
line(12,320,12,365);
line(12,320,350,320);
setcolor(BLACK);
outtextxy(40,335," C H A N G E  P A S S W O R D ");

setcolor(DARKGRAY);
rectangle(12,385,350,430);
setcolor(BLACK);
rectangle(12,385,351,431);
setcolor(WHITE);
line(12,385,12,430);
line(12,385,350,385);
setcolor(BLACK);
outtextxy(40,400," V I E W  N O T I C E ");

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
outtextxy(40,140," A D D  N O T I C E ");
option=1;
delay(600);
}
if(check==50)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,205," E D I T  N O T I C E ");
option=2;
delay(600);
}
if(check==51)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,270," D E L E T E  N O T I C E ");
option=3;
delay(600);
}
if(check==52)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,335," C H A N G E   P A S S W O R D ");
option=4;
delay(600);
}
if(check==53)
{
putimage(10,110,button_down,COPY_PUT);
outtextxy(40,400," V I E W  N O T I C E ");
option=5;
delay(600);
}
free(main_window);
free(button_down);
cleardevice();
closegraph();
return(option);
}

int Admin::admin_login()
{
    system("cls");
    string user;
	string password;
    ifstream dataFile("userpass.txt");
	dataFile >> user >> password;
	dataFile.close();

	string user1;
	string password1;
	char ch;

    gotoxy(25,10);
	cout << "USERNAME:";
	cin >> user1 ;

	gotoxy(25,15);
    cout << "PASSWORD:";
    ch = _getch();
    while(ch != 13)
    {
      password1.push_back(ch);
      cout << '*';
      ch = _getch();
    }
	start:if (user1 == user && password==password1)
    {
        gotoxy(25,20);
      cout << "you are logged in!" << endl;
      process1();
      process2();
      process4();
      process5();
    }

	else
    {
        gotoxy(25,20);
        cout << "Username and/or password is incorrect. Please try again.";
        process();
    }
}


//---------------- MAIN FUNCTION ------------------

int main()
{
    int gd= DETECT,gm;
    initgraph(&gd,&gm,"c:....\\BGI\\");
    Control c;
    c.intro();
    process();
    process3();
    getch();
    return 0;
}

int process(void)
{
int option;
Control c;
Admin a;
option=c.main_menu();
if(option==1)
    process3();

if(option==2)
   a.admin_login();

if(option==3)
    exit(0);
}

//-------------FUNCTION FOR UPDATING NOIICE------------

int process1(void)
{
int option;
Control c;
option=c.update_notice();
if(option==1)
    process2();

if(option==2)
    process5();

if(option==3)
    process4();

if(option==4)
    change_password();

if(option==5)
    process3();
}

//-----------------NOTICE MANAGEMENT---------------
int process2(void)
{
    Admin a;
    int choice;
    while(1)
    {
    cout<<"enter the Notice ID:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        a.update_news_events();
        break;
    case 2:
        a.update_academic_pro();
        break;
    case 3:
        a.update_exam_routines();
        break;
    case 4:
        a.update_results();
        break;
    case 5:
        a.update_class_routines();
        break;
    default:
        process1();
    }
    }
exit(0);
}
//-------------------NEWS AND EVENTS--------------------
int Admin :: update_news_events(void)
{
    system("cls");
    char date[25];
    std::string notice1;
    ofstream file1("news.txt",ios_base::app);
     gotoxy(100,3);
    cin.getline(date,25);
for(int i=1;i<=25;i++)
{
    getline(cin,notice1);
    file1<< notice1 << endl;
}
    file1.close();
    return 0;
}

//-------------------ACADEMIC PROGRAMS----------------------
int Admin :: update_academic_pro(void)
{
    system("cls");
    char date[25];
    std::string notice2;
    ofstream file2("academic.txt",ios_base::app);
    gotoxy(100,3);
    cin.getline(date,25);
for(int i=1;i<=25;i++)
{
    getline(cin,notice2);
    file2<< notice2 << endl;
}
    file2.close();
    return 0;
}

//------------------EXAM ROUTINES-----------------------------
int Admin :: update_exam_routines(void)
{
    system("cls");
    char date[25];
    std::string notice3;
    ofstream file3("exam.txt",ios_base::app);
     gotoxy(100,3);
    cin.getline(date,25);
for(int i=1;i<=25;i++)
{
    getline(cin,notice3);
    file3<< notice3 << endl;
}
    file3.close();
    return 0;
}

//------------------RESULTS-----------------------------------
int Admin :: update_results(void)
{
    system("cls");
    char date[25];
    std::string notice4;
    ofstream file4("results.txt",ios_base::app);
     gotoxy(100,3);
    cin.getline(date,25);
for(int i=1;i<=25;i++)
{
    getline(cin,notice4);
    file4<< notice4 << endl;
}
    file4.close();
    return 0;
}

//-------------------CLASS ROUTINES------------------------------
int Admin :: update_class_routines(void)
{
    system("cls");
    char date[25];
    std::string notice5;
    ofstream file5("class.txt",ios_base::app);
     gotoxy(100,3);
    cin.getline(date,25);
for(int i=1;i<=25;i++)
{
    getline(cin,notice5);
    file5<< notice5 << endl;
}
    file5.close();
    return 0;
}
int process3(void)
{
    Notice n;
    int choice;
    while(1)
    {
    cout<<"enter the Notice ID:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        n.news_events();
        break;
    case 2:
        n.academic_pro();
        break;
    case 3:
        n.exam_routines();
        break;
    case 4:
        n.results();
        break;
    case 5:
        n.class_routines();
        break;
    default:
        process();
    }
    }
    exit(0);
}

//--------------reading from file------------------
int Notice::news_events()
{
    system("cls");
    std::string notice1;
    ifstream file1("news.txt",ios::in);
    if (file1.is_open())
    {
        while (  getline(file1,notice1) )
    {

        std::cout << notice1<<'\n';
    }
        file1.close();
    }

    else
        std::cout << "Unable to open file"<<'\n';
        std::cin.get();

        return 0;
}

//--------------reading from file------------------
int Notice::academic_pro()
{
    system("cls");
    std::string notice2;
    ifstream file2("academic.txt",ios::in);
    if (file2.is_open())
    {
        while (  getline(file2,notice2) )
    {

        std::cout << notice2<<'\n';
    }
        file2.close();
    }

    else
        std::cout << "Unable to open file"<<'\n';
        std::cin.get();

        return 0;
}

//--------------reading from file------------------
int Notice::exam_routines()
{
    system("cls");
    std::string notice3;
    ifstream file3("exam.txt",ios::in);
    if (file3.is_open())
    {
        while (  getline(file3,notice3) )
    {

        std::cout << notice3<<'\n';
    }
        file3.close();
    }

    else
        std::cout << "Unable to open file"<<'\n';
        std::cin.get();

        return 0;
}

//--------------reading from file------------------
int Notice::results()
{
    system("cls");
    std::string notice4;
    ifstream file4("results.txt",ios::in);
    if (file4.is_open())
    {
        while (  getline(file4,notice4) )
    {

        std::cout << notice4<<'\n';
    }
        file4.close();
    }

    else
        std::cout << "Unable to open file"<<'\n';
        std::cin.get();

        return 0;
}

//--------------reading from file------------------
int Notice::class_routines()
{
    system("cls");
    std::string notice5;
    ifstream file5("class.txt",ios::in);
    if (file5.is_open())
    {
        while (  getline(file5,notice5) )
    {

        std::cout << notice5<<'\n';
    }
        file5.close();
    }

    else
        std::cout << "Unable to open file"<<'\n';
        std::cin.get();

        return 0;
}
//-------------------deleting files--------------------
int process4(void)
{
    int choice;
    while(1)
    {
    cout<<"enter the Notice ID:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        delete_news();
        break;
    case 2:
        delete_academic();
        break;
    case 3:
        delete_exam();
        break;
    case 4:
        delete_results();;
        break;
    case 5:
        delete_class();
        break;
    default:
        process1();
    }
    }
    exit(0);
}
//--------------------deleting news---------------------
int delete_news()
{
    const char *file_name;
     int n;
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("news.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
        line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }

    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("news.txt", file_name);
}

//--------------------deleting academic---------------------
int delete_academic()
{
    const char *file_name;
     int n;
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("academic.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
        line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }

    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("academic.txt", file_name);
}

//--------------------deleting exam---------------------
int delete_exam()
{
    const char *file_name;
     int n;
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("exam.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
        line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }

    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("exam.txt", file_name);
}

//--------------------deleting results---------------------
int delete_results()
{
    const char *file_name;
     int n;
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("results.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
        line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }

    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("results.txt", file_name);
}

//--------------------deleting class routines---------------------
int delete_class()
{
    const char *file_name;
     int n;
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("class.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
        line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }

    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("class.txt", file_name);
}

//---------------------editing notice------------------------

int process5(void)
{
    int choice;
    while(1)
    {
    cout<<"enter the Notice ID:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        update_news();
        break;
    case 2:
        update_academic();
        break;
    case 3:
        update_exam();
        break;
    case 4:
        update_results();;
        break;
    case 5:
        update_class();
        break;
    default:
        process1();
    }
    }
    exit(0);
}
void update_news()
{
     system("cls");
    fstream news;
    fstream temp;

    news.open("news.txt",ios::in);
    temp.open("temp.txt",ios::out);
    string str1;
    char date [25];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the date to update notice : ";
    cin.getline(a,25);
    if(!news.eof())
    {
            news.getline(date,25);
            getline(cin,str1);
            news<<str1<<'\n';

        if(strcmp(date,a)==0)
        {

            cout<<" \n\twrite new notice:\n ";
            for(int i=1;i<=25;i++)
            {
                news.getline(date,25,'\n');
                getline(cin,str1);
                news<<str1<<'\n';

            temp<< date<<str1<<'\n';
            }
        }
        else
        {
            temp<<date<< '\n'<<str1<<'\n';
        }
   }
    temp.close();
    news.close();

    news.open("news.txt",ios::out);
    temp.open("temp.txt",ios::in);
    if(!temp.eof())
    {
        gotoxy(100,3);
        temp.getline(date,25,'\n');
        news<<date<<'\n';
        while(getline(temp,str1))
       {
        news<<str1<<'\n';
       }
    }
    temp.close();
    news.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}

void update_academic()
{
     system("cls");
    fstream academic;
    fstream temp;

    academic.open("academic.txt",ios::in);
    temp.open("temp.txt",ios::out);
    string str1;
    char date [25];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the date to update notice : ";
    cin.getline(a,25);
    if(!academic.eof())
    {
            academic.getline(date,25);
            getline(cin,str1);
            academic<<str1<<'\n';

        if(strcmp(date,a)==0)
        {

            cout<<" \n\twrite new notice:\n ";
            for(int i=1;i<=25;i++)
            {
                academic.getline(date,25,'\n');
                getline(cin,str1);
                academic<<str1<<'\n';

            temp<< date<<str1<<'\n';
            }
        }
        else
        {
            temp<<date<< '\n'<<str1<<'\n';
        }
   }
    temp.close();
    academic.close();

    academic.open("academic.txt",ios::out);
    temp.open("temp.txt",ios::in);
    if(!temp.eof())
    {
        gotoxy(100,3);
        temp.getline(date,25,'\n');
        academic<<date<<'\n';
        while(getline(temp,str1))
       {
        academic<<str1<<'\n';
       }
    }
    temp.close();
    academic.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}

void update_exam()
{
     system("cls");
    fstream exam;
    fstream temp;

    exam.open("exam.txt",ios::in);
    temp.open("temp.txt",ios::out);
    string str1;
    char date [25];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the date to update notice : ";
    cin.getline(a,25);
    if(!exam.eof())
    {
            exam.getline(date,25);
            getline(cin,str1);
            exam<<str1<<'\n';

        if(strcmp(date,a)==0)
        {

            cout<<" \n\twrite new notice:\n ";
            for(int i=1;i<=25;i++)
            {
                exam.getline(date,25,'\n');
                getline(cin,str1);
                exam<<str1<<'\n';

            temp<< date<<str1<<'\n';
            }
        }
        else
        {
            temp<<date<< '\n'<<str1<<'\n';
        }
   }
    temp.close();
    exam.close();

    exam.open("exam.txt",ios::out);
    temp.open("temp.txt",ios::in);
    if(!temp.eof())
    {
        gotoxy(100,3);
        temp.getline(date,25,'\n');
        exam<<date<<'\n';
        while(getline(temp,str1))
       {
        exam<<str1<<'\n';
       }
    }
    temp.close();
    exam.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}

void update_results()
{
     system("cls");
    fstream results;
    fstream temp;

    results.open("results.txt",ios::in);
    temp.open("temp.txt",ios::out);
    string str1;
    char date [25];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the date to update notice : ";
    cin.getline(a,25);
    if(!results.eof())
    {
            results.getline(date,25);
            getline(cin,str1);
            results<<str1<<'\n';

        if(strcmp(date,a)==0)
        {

            cout<<" \n\twrite new notice:\n ";
            for(int i=1;i<=25;i++)
            {
                results.getline(date,25,'\n');
                getline(cin,str1);
                results<<str1<<'\n';

            temp<< date<<str1<<'\n';
            }
        }
        else
        {
            temp<<date<< '\n'<<str1<<'\n';
        }
   }
    temp.close();
    results.close();

    results.open("results.txt",ios::out);
    temp.open("temp.txt",ios::in);
    if(!temp.eof())
    {
        gotoxy(100,3);
        temp.getline(date,25,'\n');
        results<<date<<'\n';
        while(getline(temp,str1))
       {
        results<<str1<<'\n';
       }
    }
    temp.close();
    results.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}

void update_class()
{
     system("cls");
    fstream classs;
    fstream temp;

    classs.open("class.txt",ios::in);
    temp.open("temp.txt",ios::out);
    string str1;
    char date [25];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the date to update notice : ";
    cin.getline(a,25);
    if(!classs.eof())
    {
            classs.getline(date,25);
            getline(cin,str1);
            classs<<str1<<'\n';

        if(strcmp(date,a)==0)
        {

            cout<<" \n\twrite new notice:\n ";
            for(int i=1;i<=25;i++)
            {
                classs.getline(date,25,'\n');
                getline(cin,str1);
                classs<<str1<<'\n';

            temp<< date<<str1<<'\n';
            }
        }
        else
        {
            temp<<date<< '\n'<<str1<<'\n';
        }
   }
    temp.close();
    classs.close();

    classs.open("class.txt",ios::out);
    temp.open("temp.txt",ios::in);
    if(!temp.eof())
    {
        gotoxy(100,3);
        temp.getline(date,25,'\n');
        classs<<date<<'\n';
        while(getline(temp,str1))
       {
        classs<<str1<<'\n';
       }
    }
    temp.close();
    classs.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}

int change_password()
{
     system("cls");
    fstream userpass;
    fstream temp;

    userpass.open("userpass.txt",ios::in);
    temp.open("temp.txt",ios::out);
    string username;
    string password;
    string pass;
    cin.ignore();
    cout<<"\t enter old password to change password : ";
    getline(cin,password);
    if(!userpass.eof())
    {
            getline(cin,username);
            getline(cin,password);
            userpass<<username<<password;

        if(password.compare(pass)==0)
        {

            cout<<"\twrite new user name and password: ";
            {
                cout<<"\n\tusername:";
                getline(cin,username);
                cout<<"\n\tpassword:";
                getline(cin,password);
                userpass<<username<<password<<'\n';

                temp<< username<<'\n'<<password<<'\n';
            }
        }
        else
        {
            temp<<username<< '\n'<<password<<'\n';
        }
   }
    temp.close();
    userpass.close();

    userpass.open("userpass.txt",ios::out);
    temp.open("temp.txt",ios::in);
    if(!temp.eof())
    {
        getline(cin,password);
        temp<<password;

        userpass<<password<<'\n';
        while(getline(temp,username))
       {
        userpass<<username<<'\n';
       }
    }
    temp.close();
    userpass.close();
    remove("temp.txt");
    cout<<"\tdone !!! \n";
}
