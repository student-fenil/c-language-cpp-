#include<iostream>
using namespace std;
#include<conio.h>
int c=0;
class set
{
 public:
 set()
 {
  c++;
  cout<<"\n construct"<<c;
 }
 ~set()
 {
  cout<<"\n destruct "<<c;
  c--;
 }
};
  int main()
 {
  {
   set a,b;
  }
  getch();
}


/* output
 construct1
 construct2
 destruct 2
 destruct 1*/