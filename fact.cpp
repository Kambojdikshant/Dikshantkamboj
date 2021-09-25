// write a program to calculate the factorial of a number using fact() function .
// Name - Dikshant Kamboj, section - G 
#include<iostream>
using namespace std ; 
int fact(int n)
{
   int i, f =1 ; 
   for(i=1; i<=n; i++)
   {
      f = f*i ;
   }
   return f ;
}
int main()
{
    int n ; 
    cout<<"Enter the number\n" ; 
    cin>> n ; 
    int m = fact(n) ; 
    cout<<"Factorial is: "<<m ; 
    return 0 ; 
}
