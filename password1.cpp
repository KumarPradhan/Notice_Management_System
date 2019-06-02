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

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    system("cls");
    string username;
    string password;
    string *user;
    string *pass;
    char ch;
    ofstream userpass("password.txt",ios::app);
    gotoxy(25,10);
    cout<<"USERNAME:";
    getline(cin,username);
    user=&username;

    gotoxy(25,15);
    cout << "PASSWORD:";
    ch = _getch();
    pass=&password;
    while(ch != 13)
    {
      password.push_back(ch);
      cout << '*';
      ch = _getch();
    }
     userpass.close();

    ifstream userpass1("userpass.txt",ios_base::in);
    if (userpass1.is_open())
    {
        while (  getline(userpass1,username) && getline(userpass1,password) )
    {

    if(username.compare(*user)==0 && password.compare(*pass)==0)
    {
        gotoxy(28,17);
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tyou are logging in......\n";
        //process1();
        //process2();
       // process4();
        //process5();
        //return 0;
    }
    else
    {
        gotoxy(28,17);
        cout << "\t\t\t\t\t\t\tyou are not logged in!\t\t\t\t\t\t\tnRe-enter username and password";
        //process();
        exit(0);
    }
    }

    }

    else
        std::cout << "Unable to open file"<<'\n';
        std::cin.get();

    userpass1.close();

    return 0;
}
