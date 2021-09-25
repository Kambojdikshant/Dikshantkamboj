// function overloading
// Name - Dikshant kamboj, Section - G 
#include<iostream>
using namespace std ; 
int area(int a)
{
    return a*a ; 
}
int area(int l, int b) 
{
   return l*b ; 
}
float area(float r)
{
   return 3.14*r*r ; 
}
int main()
{
    int a, l, b ; 
    float r ; 
    cout<<"Enter the side of the square "<<endl ; 
    cin>>a ; 
    cout<<"Enter the length and breadth"<<endl ; 
    cin>>l>>b; 
    cout<<"Enter the radius of the rectangle "<<endl ; 
    cin>>r ; 
    
    cout<<"Area of the square: "<<area(a)<<endl  ; 
    cout<<"Area of the rectangle: "<<area(l,b)<<endl ; 
    cout<<"Area of the circle: "<<area(r)<<endl ; 
    
    return 0 ; 
}
     
