#include <iostream>
#include <fstream>
#include  <string.h>
#include<stdlib.h>
using namespace std;
void update_news()
{
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

int main()
{
    update_news();
    return 0;
}
