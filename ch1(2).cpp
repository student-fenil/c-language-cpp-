//pointer to character array

#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
 //charcarter array b
 char b[] = "Hello";
 //pointer to character array
 char *c =&b[0];
 // chae *c=b;
 //print the value of c
 cout << c << endl;
 getch();
 return(0);
}

/*output
Hello
*/