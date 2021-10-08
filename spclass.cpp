#include<iostream>
using namespace std ; 
class student 
{
    private :
      char name[20] ; 
      int age ; 
    public : 
      void putdata()
      {
          cout<<"Name is "<<name<<endl ; 
          cout<<"Age is "<<age<<endl ; 
      }
      void getdata()
      {
         cout<<"Enter the name " ; 
         cin.getline(name,20) ; 
         cout<<"Enter the age " ;
         cin>>age ; 
      }
} ; 
int main()
{
     student s ; 
     s.getdata() ; 
     s.putdata() ; 
     return 0 ; 
}
