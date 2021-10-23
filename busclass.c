// Define a bus class in C++ with calling ... all the data member 
#include<iostream>
using namespace std ; 

class bus 
{
    int bus_no ; 
    char from[20] ; 
    char to[20] ; 
    char type ; 
    int distance  ; 
    int fair ; 
    public:
       bus()
       {
           fair = 500 ;
       }
       void allocate()
       {
           cout<<"Enter the no " ; 
           cin>>bus_no;
           cout<<"palace of the origin " ; 
           cin>>from  ; 
           cout<<"Palace of the destination " ; 
           cin>>to ;
           cout<<"Enter the type of the bus " ; 
           cin>>type ; 
           cout<<"Enter the distance " ; 
           cin>>distance ; 
       }
       void calculate()
       {
           if(type == 'O' || type == 'o')
           {
               fair = fair + 15*distance ;
           }
           if(type == 'E' || type == 'e')
           {
               fair = fair + 20*distance ;
           }
           if(type == 'L' || type == 'l')
           {
               fair = fair + 24*distance ;
           }
       }
       void display() ; 
} ; 
void bus :: display()
{
    cout<<"Bus no is "<<bus_no<<endl ; 
    cout<<"Palace of the origin is "<<from<<endl ; 
    cout<<"Palace of destination is "<<to<<endl ; 
    cout<<"Type of Bus is "<<type<<endl ; 
    cout<<"Distance is "<<distance<<endl ; 
    cout<<"Your fair is "<<fair<<endl ; 
}
int main()
{
    bus ob ; 
    ob.allocate() ; 
    ob.calculate() ; 
    ob.display() ; 
}
