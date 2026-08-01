#include<iostream>
using namespace std;
#include<conio.h>

class num
{
	public:
	int a,b;
	num(int x,int y=1)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"\na "<<a<<"b"<<b;
	}
};
 int main()
 {
	
	num n(10);
	num n1(10,20);
	num n2=num(4,5);
	n.display();
	n1.display();
	n2.display();
	getch();
 }


 /* output
 a 10b1
a 10b20
a 4b5
*/