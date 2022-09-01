
#include <iostream>
#include <conio.h>

using namespace std;

 int main()
{
  
   int a =10, b=20,c=30;
   int * p;
   
   p = &a;
   
   cout << "\n *p =" <<*p;
   
   p=&b;
   
   cout<< "\n *p ="<<*p;
   
   p=&c;
   
   cout<<"\n *p =" <<*p;
   

    return 0;
}