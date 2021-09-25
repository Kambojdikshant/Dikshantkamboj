// To find the largest and smallest in the array
// Name - Dikshant kamboj, Section - G, Id - 200111213, Roll no. - 2018323
#include<iostream>
using namespace std ;
int main()
{
    int n, i ;
    cout<<"Enter the number"<<endl ;
    cin>>n ;
    int a[n], large, small ;
    cout<<"Enter the element in the array"<<endl ;
    for(i=0; i<n; i++)
    {
        cin>>a[i]  ;
    }

    large = a[0] ;
    small = a[0] ;
    for(i=1; i<n; i++)
    {
        if(large<a[i])
           large = a[i] ;

        if(small>a[i])
           small = a[i] ;
    }
    cout<<"Largest element is: "<<large<<endl ;
    cout<<"Small element is: "<<small<<endl ;

    return 0 ;

}
