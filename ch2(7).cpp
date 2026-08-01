#include<iostream>
using namespace std;
#include<conio.h>
class a
{
	public:
		int a;
		void geta()
		{
			cout<<"enter a";
			cin>>a;
		}
};
class b
{       public:
	int b;
		void getb()
		{
			cout<<"enter b";
			cin>>b;
		}
};
class C:public a,public b
{
	public:
		void put()
		{
			cout<<"a"<<a<<"b"<<b;
		}
};

int main()
{
	C c;
	c.geta();
	c.getb();
	c.put();
	getch();
}



/* output
enter a 5
enter b 6
a5b6
*/