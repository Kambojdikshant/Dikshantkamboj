// Delete a element from the array 
// Name - Dikshant kamboj , Section - G 
#include<iostream>
using namespace std ; 
int main()
{
    int n, i ; 
    cout<<"Enter the number " ; 
    cin>> n ; 
    int a[n] ; 
    cout<<"Enter the array element " ; 
    for(i=0; i<n; i++)
    {
       cin>>a[i] ; 
    }
    int j, find = 0 , fnum ; 
    cout<<"Enter the number to be find "<<endl ; 
    cin>>fnum ;
    for(i=0; i<n; i++)
    {
       if(a[i] == fnum)
       {
          for(j=i; j<n-1; j++)
          {
             a[j] = a[j+1] ; 
          }
          find++ ; 
          i-- ; 
          n-- ; 
       }
    }
    if(find == 0)
    { 
       cout<<"No element find in the array enter by you" ; 
    }
    else 
    for(i=0; i<n; i++)
    {
       cout<<a[i]<<" " ; 
    }
    return 0 ; 
}
 
  
