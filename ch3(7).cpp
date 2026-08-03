#include <iostream>
using namespace std;

class test
{
public:
    void area(double r)
    {
        cout << "area of circle is " << 3.14 * r * r << endl;
    }

    void area(float l, float b)
    {
        cout << "area of rect is " << l * b << endl;
    }
};

int main()
{
    test t;

    t.area(10);
    t.area(1.5f, 1.5f);

    return 0;
}


/*output
area of circle is 314
area of rect is 2.25
*/