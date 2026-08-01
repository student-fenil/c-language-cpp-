#include<iostream>
using namespace std;

#include<conio.h>

class A
{ public:
	int a;
	void geta()
	{ cout<<"a"<<a<<endl; }
};
class B:public A
{ public:
	int b;
	void getb()
	{ cout<<"b"<<b<<endl; }
};
class C:public A
{ public:
	int c;
	void getc()
	{ cout<<"c"<<c<<endl; }
};
class D:public A
{ public:
	int d;
	void getd()
	{ cout<<"d"<<d<<endl; }
};
int main()
{ B b1;
  C c1;
  D d1;
  
  cout<<"enter a";
  cin>>b1.a;
  cout<<"enter a";
  cin>>c1.a;
  cout<<"enter a";
  cin>>d1.a;

  cout<<"a from class b";
  b1.geta();
  cout<<"a from class c";
  c1.geta();
  cout<<"a from class d";
  d1.geta();

  cout<<"enter b";
  cin>>b1.b;
  cout<<"enter c";
  cin>>c1.c;
  cout<<"enter d";
  cin>>d1.d;

  b1.getb();
  c1.getc();
  d1.getd();
  getch();
}



/* output
enter a 5
enter a 6
enter a 7
a from class ba5
a from class ca6
a from class da7
enter b 7
enter c 8
enter d 9
b7
c8
d9
*/