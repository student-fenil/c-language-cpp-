
//write a program to find the area aof a rectangle using a class


#include<iostream>
using namespace std;
#include<conio.h>

class rect
{
 private:
	int l,b;
 public:
	void getdata();
	void putdata() //inside class
	{
	 cout<<"length"<<l<<endl;
	 cout<<"breath"<<b<<endl;
	 cout<<"area is"<<l<<endl;
	}
};
 void rect::getdata() //outside class
 {
	cout<<"enter length";
	cin>>l;
	cout<<"enter breath";
	cin>>b;
 }
 int main()
 {
	rect r;
	r.getdata();
	r.putdata();
	getch();
 }



 /*output
 nter length fenil
enter breathlength0
breath3334144
area is0
*/