#include<iostream>
using namespace std;
#include<conio.h>
class circle
{
	private:
	int r;
	public:
	void area()
	{
		cout<<"enter radius";
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
enter radius 3
area 28.26 */