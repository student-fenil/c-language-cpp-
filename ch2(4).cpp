#include<iostream>
using namespace std;
#include<conio.h>
class radius
{
	protected:
	int r;

};
class circle:public radius
{
	public:
	void area()
	{
		cout<<"enter radious";
		cin>>r;
		cout<<"area "<<3.14*r*r;
	}
};
	    int main()
	{
		
		circle c;
		c.area();
		getch();
}


/*output
enter radious 10
area 314*/