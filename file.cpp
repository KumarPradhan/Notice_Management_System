#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include<stdlib.h>
using namespace std;

/*void displaystudentdata()
{
   string name, grade, tname;
    int age, x=0; // x - "counter" to check if user entered wrong name

    system("cls");

    ifstream students("news.txt");

    while(students >> name >> grade >> age)
    {

        cout<<"Name= "<<name <<", Grade= "<< grade <<" , Age= " <<age<<"\n";
    }
    students.clear(); // clear eof and fail bits
    students.seekg(0, ios::beg);
     students.close();
}
*/
void deletestudentdata()
{
    string name, grade, tname;
    int age, x=0; // x - "counter" to check if user entered wrong name



    ifstream students("news.txt");
    ofstream temp("temp.txt"); // temp file for input of every student except the one user wants to delete

    cout << "Enter name of the student you want to erase from database >" << endl;
    cin >> tname;

    while(students >> name >> grade >> age)
    {
        if(tname!=name)
        { // if there are students with different name, input their data into temp file
            temp << name << ' ' << grade << ' ' << age << endl;
        }
        if(tname==name){ // if user entered correct name, x=1 for later output message that the user data has been deleted
            x=1;
        }
    }
    students.clear(); // clear eof and fail bits
    students.seekg(0, ios::beg);
    students.close();
    temp.close();
    remove("news.txt");
    rename("temp.txt","students.txt");
    if(x==0){ // x was set to 0 at start, so if it didn't change, it means user entered the wrong name
        cout << "There is no student with name you entered." << endl;
    }
    else{ // x is not 0, it means user entered the correct name, print message that students data has been deleted
        cout << "Student data has been deleted." << endl;
    }
}

int main(void)
{
  displaystudentdata();
  deletestudentdata();
  displaystudentdata();
  cout << "Student data has been deleted. \n\n" << endl;
  cout<<" \nPress any key to continue\n";
  cin.ignore();
  cin.get();

   return 0;
}
