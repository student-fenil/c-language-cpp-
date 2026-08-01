#include<iostream>
using namespace std;
#include<conio.h>

class A
{
 public:
 int a;
 A(int x)
 {
  a=x;
 }
 void puta()
 {
  cout<<a;
 }
};
 class B:public A
 {
  public:
  int b;
  B(int x,int y):A(y)
  {
   b=x;
  }
  void putb()
  {
   cout<<b;
  }
 };
 int main()
 {

  B b1(1,2);
  b1.puta();
  b1.putb();
  getch();
  return 0;
}


/*output
21*/