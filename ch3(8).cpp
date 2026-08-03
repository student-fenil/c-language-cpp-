#include <iostream>
#include <cstring>
using namespace std;

class data
{
private:
    char a[100];

public:
    data()
    {
        a[0] = '\0';
    }

    data(char *s)
    {
        strcpy(a, s);
    }

    data operator+(data d2)
    {
        data d3;
        strcpy(d3.a, a);
        strcat(d3.a, d2.a);
        return d3;
    }

      void show()
    {
        cout << a;
    }

    int operator==(data d2)
    {
        if (strcmp(a, d2.a) == 0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    char s1[100], s2[100];

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    data d1(s1), d2(s2), d3;
        d3 = d1 + d2;
    d3.show();

    if (d1 == d2)
        cout << "\nSame";
    else
        cout << "\nNot Same";

    return 0;
}



/*output
Enter first string: helloworld
Enter second string: fenilviroja
helloworld fenilviroja
Not Same
*/