#include<iostream>
using namespace std ; 
class A 
{  
    public :
      int x  ;
      float y  ; 
    private :
      int a ; 
    protected :
      int n  ; 
};
int main()
{
    A obj ;
    obj.x = 10 ; 
    obj.y = 14.5 ;  
    cout<<"Public is" <<obj.x<<obj.y<<" "<<endl ; 
    //cout<<"Private is "<<B.a ; 
   // cout<<"Protected is " <<B.n ; 
    return 0 ;
}
