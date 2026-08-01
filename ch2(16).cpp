#include<iostream>
using namespace std;
#include<conio.h>

class construct
{
 int a,b;
 public:
 construct() {}

 construct(int x,int y)
 {
	a=x;
	b=y;
 }
 void putdata() { cout<<a<<" "<<b; }
};
int main()
{
 construct c(5,10);
 cout<< "value of a:b";
 c.putdata();
 getch();
}


/* output
value of a:b5 10
*/