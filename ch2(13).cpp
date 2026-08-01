#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	A(int x)
	{ a=x; }
	void putA()
	{ cout<<a; }
};
class B
{ 	int b;
	public:
	B(int x)
	{
	 b=x;
	}
	void putB()
	{ cout<<b; }
};
class C:public A,public B
{
	int c;
	public:
	C(int x,int y,int z): A(x),B(y)
	{
	 c=z;
	}
	void putC()
	{ cout<<c; }
};
int main()
{
 
 C c1(1,2,3);
 c1.putA();
 c1.putB();
 c1.putC();
 
 return(0);
}




/*output
123
*/
