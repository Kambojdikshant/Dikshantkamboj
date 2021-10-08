#include<iostream>
using namespace std ; 
class item 
{
     public :
        int cost  ; 
        float milage ; 
} ; 
int main()
{ 
    item s ; 
    cout<<"Enter the cost " ; 
    cin>>s.cost ; 
    cout<<"Enter the milage " ;
    cin>>s.milage ;
    cout<<"Cost is "<<s.cost<<endl ; 
    cout<<"Milage is "<<s.milage ; 
    return 0 ;
}
