#include<iostream>
using namespace std;
#include<conio.h>
class circle
{
	protected:
	int r;
	public:
	void area()
	{
		cout<<"enter radious";
		cin>>r;
		cout<<"area"<<3.14*r*r;
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
area314
*/