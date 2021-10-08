#include<iostream>
using namespace std ; 
class student
{
    public :
      string name ; 
      void printname() 
      { 
          cout<<"Name is "<<name<<endl ; 
      }
} ; 
int main()
{
    student A ; 
    //A.name = "Dikshant kamboj" ; 
    cout<<"Enter the name " ; 
    cin>>A.name ; 
    A.printname() ; 
    return 0 ; 
}
