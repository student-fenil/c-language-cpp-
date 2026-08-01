#include<iostream>
using namespace std;
#include<conio.h>

class base
{
 int x;
 public:
 base()
 {
  cout<<"base default constructer\n";
 }
 base(int i)
 { x=i;
 cout<<"base class parameterised consructor"<<x<<endl;
 }
};
 class derived:public base
 {
  int y;
  public:
  derived()
  {
   cout<<"derived default constructor\n";
  }

  derived(int i,int j):base(j)
  { y=i;
  cout<<"derived parameterized constructor"<<y<<endl;
  }
 };
 int main()
 {

  derived d1;
  derived d2(10,20);
  getch();
 }


 /* output
 base default constructer
derived default constructor
base class parameterised consructor20
derived parameterized constructor10
*/