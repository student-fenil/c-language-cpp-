#include<iostream>
using namespace std;
#include<conio.h>
class A
{ public:
  int a;
  void getA()
  { cout<<"a"<<a<<endl; } };
  class B:public A
  { public:
    int b;
    void getB()
    { cout<<"b"<<b<<endl; } };
  class C: public B
  { public:
    int c;
    void getC()
    { cout<<"c"<<c; } };

  int main()
  { C c1;
   
   cout<<"enter a";
   cin>>c1.a;
   cout<<"enter b";
   cin>>c1.b;
   cout<<"enter c";
   cin>>c1.c;
   c1.getA();
   c1.getB();
   c1.getC();
   getch();
}


/* output
enter a 5
enter b 6
enter c 7
a5
b6
c7
*/