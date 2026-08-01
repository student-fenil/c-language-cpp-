#include<iostream>
using namespace std;
#include<conio.h>

class rect
{
 int l,b;
 public:
	void getdata();
	void putdata();
};

void rect::getdata()
{
	cout<<"enter length and breadth:";
	cin>>l>>b;
}

void rect::putdata()
{
	cout<<"\n length="<<l;
	cout<<"\n breadth="<<b;
	cout<<"\n area="<<l*b;
}
int main()
{
 rect r;
 r.getdata();
 r.putdata();
 getch();
}


/*output
enter length and breadth: 12 
12

 length=12
 breadth=12
 area=144
 */