// write a program to input string and convert uppercase charcter to lowercase
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
 int i;
 char s[10];
 cout<<"enter string:";
 cin>>s;
 cout<<"string is"<<s<<endl;

 for(i=0;s[i]!='\0';i++)
 {
  if(s[i]>=65 && s[i]<=90)
	s[i]=s[i]+32;
	cout<<s[i];
 }
 getch();
}


/*output
enter string: fenil
string isfenil
fenil
*/