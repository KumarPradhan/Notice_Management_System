#include <fstream>
#include <string>
#include <iostream>

int main()
{
     std::string password = "";

     std::ofstream inputFile("password.txt"); //should put the full path

     if( inputFile.is_open() )
     {
          std::getline( inputFile, password );

          inputFile.close();

          std::cout << "Password is: " << password << std::endl;
     }
     else
     {
          std::cerr << "Problem in opening the file" << std::endl;
     }

     return 0;
}
