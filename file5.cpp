#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>
//using namesapce std;

int main()
{
    std::ifstream readFile("news.txt");
    std::string readout, search,firstname,lastname;

    std::cout << "Enter the id which you want to modify:";
    std::cin >> search;

   while(getline(readFile,readout))
        {
        if (search.compare(readout)==0)
            {
            std::cout << "Enter new First name:";
            getline(std::cin,firstname);
            }
        }

system("pause");

}
