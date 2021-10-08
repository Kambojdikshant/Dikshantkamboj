// How to access the function outside the class
#include<iostream>
using namespace std ; 
class item 
{
       public : 
          int cost ; 
          float milage ; 
          void getdata() ; 
          void putdata()
	  { 
	      cout<<"Cost is "<<cost<<endl ; 
              cout<<"Milage is "<<milage<<endl ; 
          }
} ; 
void item :: getdata() 
{
       cout<<"Enter the cost " ; 
       cin>>cost ; 
       cout<<"Enter the milage " ; 
       cin>>milage ; 
}
int main()
{
     item A ; 
     A.getdata() ; 
     A.putdata() ; 
     return 0 ; 
} 
         
