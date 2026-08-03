#include <iostream>
#include<string>
using namespace std;

class data
{
private:
    int a, b;

public:
    data()
    {
        a = 0;
        b = 0;
    }

    data(int x, int y)
    {
        a = x;
        b = y;
    }
       friend data operator+(data d1, data d2)
    {
        data d;
        d.a = d1.a + d2.a;
        d.b = d1.b + d2.b;
        return d;
    }

    friend void operator-(data &d1)
    {
        d1.a = -d1.a;
        d1.b = -d1.b;
    }

    void display()
    {
        cout << a << b << endl;
    }
};

int main()
{
    data d3, d1(-1, -1), d2(2, 2);

    operator-(d1);
    // -d1;

    d1.display();
    d2.display();

    d3 = operator+(d1, d2);
    // d3 = d1 + d2;

    d3.display();

    return 0;
}


/*output
11
22
33
*/