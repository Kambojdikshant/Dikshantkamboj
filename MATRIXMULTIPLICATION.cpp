 // Matrix multiplication
// Name - Dikshant kamboj, Section - G
#include<iostream>
using namespace std ;
int main()
{
    int n, m, i, j ;
    cout<<"Enter the number of row and coloum"<<endl ;
    cin>>n>>m ;
    int a[n][m], b[n][m], mul[n][m] ;
    cout<<"Enter the First Array element"<<endl ;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j] ;
        }
    }
     cout<<"Enter the Second Array element"<<endl ;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>b[i][j] ;
        }
    }
    int s, k ;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            s = 0 ;
            for(k=0; k<m; k++)
            {
                s = s + a[i][k] * b[k][j] ;
            }
            mul[i][j] = s ;
        }
    }
    cout<<"Multiplication of two matrix is"<<endl ;
     for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<mul[i][j]<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;

}
