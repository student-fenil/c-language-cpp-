#include <iostream>
using namespace std;

class data
{
private:
    int a;

public:
    data()
    {
        cin >> a;
    }

    int operator>(data d2)
    {
        if (a > d2.a)
            return 1;
        else
            return 0;
    }

    void show()
    {
        cout << a;
    }
};
int main()
{
    data d1, d2;

    if (d1 > d2)
    {
        d1.show();
        cout << " is large";
    }
    else
    {
        d2.show();
        cout << " is large";
    }

    return 0;
}


/*output
6422356 is large
*/