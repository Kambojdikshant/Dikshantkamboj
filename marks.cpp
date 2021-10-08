// To print the marks in the three subject 
#include<iostream>
using namespace std ; 
class student 
{
     public : 
       char name[20] ; 
       int rollno ; 
       int marks[3] ; 
       void getdata() ; 
       void putdata() ; 
} ;
void student :: getdata() 
{
    cout<<"Enter the name " ; 
    cin.getline(name,20) ; 
    cout<<"Enter the rollno" ; 
    cin>>rollno ; 
    cout<<"Enter the marks " ; 
    for(int i=0; i<3; i++)
    {
        cin>>marks[i] ; 
    }
}
void student :: putdata()
{
    cout<<"Name is "<<name<<endl ; 
    cout<<"Roll no. is "<<rollno<<endl ; 
    cout<<"Marks in three subject is " ; 
    for(int i=0; i<3; i++)
    {
       cout<<marks[i]<<" " ; 
    }
}
int main()
{
    student s ; 
    s.getdata() ; 
    s.putdata() ; 
    return 0 ; 
} 

