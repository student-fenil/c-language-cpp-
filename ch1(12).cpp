#include<iostream>
using namespace std;
#include<conio.h>

class stud
{
 int rno,age;
 char name[20];

 public:
	void getdata();
	void putdata();
};
	void stud::getdata()
	{
		cout<<"enter roll no:";
		cin>>rno;
		cout<<"enter age:";
		cin>>age;
		cout<<"enter name:";
		cin>>name;
	}
	void stud::putdata()
	{
		cout<<"\n student info";
		cout<<"\n rollno :" <<rno;
		cout<<"\n age : " <<age;
		cout<<"\n name: " <<name;

	}
	int main()
	{
	 stud s;
	 s.getdata();
	 s.putdata();
	 getch();
}


/*output
PS D:\c++ language> .\output                   
enter roll no: 1
enter age: 18
enter name: fenil

 student info
 rollno :1
 age : 18
 name: fenil
 */