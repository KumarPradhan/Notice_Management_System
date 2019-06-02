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
//void change_password()
int main()
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
        //gotoxy(25,10);
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
