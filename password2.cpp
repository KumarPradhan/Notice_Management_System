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

int main (int argc, char * const argv[])
{
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
    //pass=&password;
    while(ch != 13)
    {
      password1.push_back(ch);
      cout << '*';
      ch = _getch();
    }
	if (user1 == user && password==password1)
    {
        gotoxy(25,20);
      cout << "you are logged in!" << endl;
    }

	else
    {
        gotoxy(25,20);
        cout << "Username and/or password is incorrect. Please try again.";
    }


    return 0;
}
