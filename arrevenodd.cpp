// print even and odd in the array 
// Dikshant kamboj, Section - G 
#include<iostream>
using namespace std ;
int main() 
{
   int n, i ; 
   cout<<"Enter the number " ; 
   cin>>n ; 
   cout<<"Enter the array element " ; 
   int a[n] ; 
   for(i=0; i<n; i++)
   {
      cin>>a[i] ; 
   }
   for(i=0; i<n; i++)
   {
      if(a[i]%2 == 0)
      {
          cout<<a[i]<<" is even"<<endl  ;
      }
      else
      {
          cout<<a[i]<< " is odd"<<endl ; 
      } 
   }
   return 0  ;
}
