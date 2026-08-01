#include<iostream>
using namespace std;
#include<conio.h>

class meter
{
	int m,cm;
	public:
	void getdata();
	void putdata();
};
	void meter::getdata()
	{
	cout<<"enter meter:";
	cin>>m;
	}

	void meter::putdata()
	{
	cm=m*100;
	cout<<"\n meter ="<<m;
	cout<<"\n centi meter ="<<cm;
	}

	int main()
	{
	meter mt;
	mt.getdata();
	mt.putdata();
	getch();
	}


/*output
enter meter: 12
 meter =12
 centi meter =1200
 */