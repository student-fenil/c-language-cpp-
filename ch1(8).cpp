#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
int main()
{
 char b[10],*c;
 int l,i;
 cout<<"enter string";
 cin>>b;
 //c=&b[0];
 c=b;
 l=strlen(b);

 cout<<"\n string is";
 for(i=0;i<1;i++)
 {
	cout<<*(c+i);
 }

 cout<<"\n reverse string is";
 for(i=l-l;i>=0;i--)
 {
	cout<<*(c+i);
 }
 getch();
}

/*output
enter string fenil

 string isf
 reverse string isf
 */