#include<iostream>
using namespace std;
#include<conio.h>
class A
{ public:
  int a;
  void getA()
  { cout<<"a"<<a<<endl; }
};
class D
{ public:
  int d;
  void getD()
  { cout<<"d"<<d<<endl; }
};
 class B:public A
{ public:
   int b;
   void getB()
   { cout<<"b"<<b<<endl; }
};
 class C:public B,public D
 { public:
   int c;
   void getC()
   { cout<<"c"<<c<<endl; }
 };
 int main()
 { C c1;
 
 cout<<"enter a";
 cin>>c1.a;
 cout<<"enter b";
 cin>>c1.b;
 cout<<"enter c";
 cin>>c1.c;
 cout<<"enter d";
 cin>>c1.d;

 c1.getA();
 c1.getB();
 c1.getC();
 getch();
 return 0;
}


/*output enter a 3
enter b 4
enter c 5 
a3
b4
c5
*/