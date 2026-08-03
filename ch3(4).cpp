#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    A()
    {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    friend float mean(A);
};

float mean(A a1)
{
    return float(a1.a + a1.b) / 2.0;
}

int main()
{
    A a1;

    cout << "Mean is " << mean(a1) << endl;

    return 0;
}


/*output
Enter a and b: 1 2
Mean is 1.5
*/