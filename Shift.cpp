// Double shifting
// Name - Dikshant kamboj, Section - G
#include<iostream>
using namespace std ;
int main()
{
    int n, i ;
    cout<<"Enter the number"<<endl ;
    cin>>n;
    int a[n],b[n], j ;
    cout<<"Enter the element of the array"<<endl ;
    for(i=0; i<n; i++)
    {
        cin>>a[i] ;
    }
    int k;
    cout<<"Enter how many time you want to shift"<<endl ;
    cin>>k ;
    for(i=0; i<n; i++)
    {
        j = (i+k)%n ;
        b[j] = a[i] ;
    }
    cout<<"Array after the shifting"<<endl ;
    for(i=0; i<n; i++)
    {
        cout<<b[i]<<" " ;
    }

    return 0 ;

}
