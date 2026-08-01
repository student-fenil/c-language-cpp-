//string fuctions(5)
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>

int main()
{
	char str1[10] ="hello",str2[10] ="world",str3[10];
	int len;
	strcpy( str3,str1); // copy str1 into str3
	cout << "strcpy str3,str1) : "<<str3<<endl;
	strcat( str1,str2); // concat str1 and str2
	cout << "strcat str1,str2) : "<<str1 << endl;
	cout<<"strcmp(str1,str2):"<<strcmp("a","A")<<endl; // compare(97-65=32)
	len = strlen(str1); //total length of str1 after concatenation
	cout <<"strlen(str1) :" <<len <<endl;
	cout<<"strrev(str1):"<<strrev(str1)<<endl; // reverse given string str1
	getch();
	return(0);
}


/*output
strcpy str3,str1) : hello
strcat str1,str2) : helloworld
strcmp(str1,str2):1
strlen(str1) :10
strrev(str1):
dlrowolleh
*/