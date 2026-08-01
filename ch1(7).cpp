// write a program that takes miltiple strings as input display each string along with its  vowels,and finally display total number of vowels found all string.
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
 int c=0;
 int total=0;
 int i,j,n;
 char s[6][10];
 cout<<"HOW MANY STRING DO YOU WANT";
 cin>>n;
 cout<<"ENTER STRING";
 for(i=0;i<n;i++)
	cin>>s[i];

 for(i=0;i<n;i++)
	cout<<"\t\t"<<s[i]<<endl;

 for(i=0;i<n;i++)
 {
	cout<<"\t\t";
	for(j=0;s[i][j]!='\0';j++)
	{
		if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
			c++;
		cout<<s[i][j];
	}
	cout<<"\t"<<c;
	total+=c;
	c=0;
	cout<<endl;
 }
 cout<<"\t\t"<<"total vowels"<<total;
 getch();
}


/*output
HOW MANY STRING DO YOU WANT 1
ENTER STRING ff
                ff
                ff      0
                total vowels0
*/