#include <iostream>
using namespace std;
int main(    )
{
        char m;
        string y='acme123', x;
        do
        {
         cout<< "enter your current password"<<endl;
         cin>>x;

         if(x==y)
         {
         cout<<"enter new password"<<endl;
          cin>>x;
           if(x>=1000&&x<=9999)
            {
             y=x;
            cout<<"your successfully to change password your new password is "<<y<<endl;
            }
            else {
           cout<<"password must be four interges"<<endl;
          }
          }
         else{
         cout<<"wrong current password try again"<<endl;
         cin>>x;
         }


        cout<<"choose y or Y to change again password "<<endl;
        cin>>m;
        }
        while(m=='y'||m=='Y');


    return 0;
}
