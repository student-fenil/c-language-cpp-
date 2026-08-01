#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
	enum gender {male=1,female}gen;

	gender gender=male;
	gen=female;
	

	cout<<gender<<endl;
	cout<<gen<<endl;

	getch();
}


/*output
1
2*/