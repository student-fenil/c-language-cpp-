#include<iostream>
using namespace std;
#include<conio.h>

class test
{
	public:
		int a,b;
		test()
		{
			cout<<"enter a and b";
			cin>>a>>b;
		}
		test(int x,int y)
		{
			a=x;
			b=y;
		}
		test(test &t)
		{
			a=t.a;
			b=t.b;
		}
		void display()
		{
			cout<<a<<b<<endl;
		}
};
int main()
{
	
	test t,t1(11,22),t2(t1);
	
	cout<<"\n value of a and b with default constructor";
	t.display();
	cout<<"\n value of a and b with perameterized constructor";
	t1.display();
	cout<<"\n value of a and b with copy constructor";
	t2.display();
	getch();
}



/* output
enter a and b 3 4

 value of a and b with default constructor34

 value of a and b with perameterized constructor1122

 value of a and b with copy constructor1122
*/