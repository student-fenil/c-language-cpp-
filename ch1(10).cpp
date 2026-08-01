// write program to take hours,min,seconds and display total time in seconds
#include<iostream>
using namespace std;
#include<conio.h>

class time
{
	private:
		int h,m,s,ts;
	public:
		void get();
		void con();
		void put()
		{
			cout<<"hh:"<<h<<"mm:"<<m<<"ss:"<<s<<endl;
			cout<<"total second is"<<ts<<endl;
		}
};
void time::get()
{
	cout<<"enter h m s";
	cin>>h>>m>>s;
}
void time::con()
{
	ts=0;
	ts=h*3600+m*60+s;
}
int main()
{
	time t;
	t.get();
	t.con();
	t.put();
	getch();
}


/*output
enter h m s 1 2 3
hh:1mm:2ss:3
total second is3723
*/