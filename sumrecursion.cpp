// Sum of the element of the number by the recursion
// Name - Dikshant kamboj , Section - G 
#include<iostream>
using namespace std ;
int sum(int n)
{
    if(n==0)
       return 0 ; 
    else 
       return(n%10 + sum(n/10)) ; 
}
int main()
{
   int n  ; 
   cout<<"Enter the number " ; 
   cin>> n ; 
   int m =  sum(n) ;
   cout<<"Sum of number: "<<m ; 
   return 0 ; 
}

