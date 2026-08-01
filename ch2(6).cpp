#include<iostream>
using namespace std;
#include<conio.h>
  class a
{ public:
  int a;
  void geta()
  { cout<<"a"<<a<<endl; }
};
  class b:public a
  { public:
    int b;
    void getb()
    { cout<<"b"<<b<<endl; }
  };
   int main()
 { b b1;
   cout<<"enter a";
   cin>>b1.a;
   cout<<"enter b";
   cin>>b1.b;
   b1.geta();
   b1.getb();
   getch();
 }


 /* output
 enter a 4
enter b 5
a4
b5
*/