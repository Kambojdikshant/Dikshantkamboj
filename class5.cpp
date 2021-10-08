// How to access the function outside the class
#include<iostream>
using namespace std ; 
class item 
{
       public : 
          int cost ; 
          float milage ; 
          void getdata(int a, float b) ; 
          void putdata()
	  { 
	      cout<<"Cost is "<<cost<<endl ; 
              cout<<"Milage is "<<milage<<endl ; 
          }
} ; 
void item :: getdata(int a, float b) 
{
       cost = a ; 
       milage = b ; 
}
int main()
{
     item A ; 
     A.getdata(10, 145.6) ; 
     A.putdata() ; 
     return 0 ; 
} 
         
