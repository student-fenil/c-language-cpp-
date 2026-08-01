#include<iostream>
using namespace std;
#include<conio.h>

class point
{
	private:
	int x,y;
	public:
	point(int x1,int y1)
	{ x=x1;y=y1; }

	point(point&p)
	{ x=p.x;
	  x=p.y;
	}
	void putdata() {cout<<x<<" "<<y<<endl; }
};
 int main()
 {
  point p1(10,15);
  point p2=p1;
  
  p1.putdata();
  p2.putdata();
  getch();
 }


 /*output
 10 15
15 4200976
*/