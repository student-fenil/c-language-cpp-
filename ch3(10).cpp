#include <iostream>
using namespace std;

class data
{
private:
    int a[5];

public:
    void get();
    data operator+(data);
    void display();
};

void data::get()
{
    for (int i = 0; i < 5; i++)
        cin >> a[i];
}

void data::display()
{
    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;
}

data data::operator+(data d2)
{
    data d;

    for (int i = 0; i < 5; i++)
        d.a[i] = a[i] + d2.a[i];
          return d;
}

int main()
{
    data d, d1, d2;

    cout << "Enter first matrix elements:\n";
    d1.get();

    cout << "Enter second matrix elements:\n";
    d2.get();

    d = d1 + d2;

    cout << "\nResult:\n";
    d.display();

    return 0;
}


/*output

Enter first matrix elements:
1
2
3
4
5
Enter second matrix elements:
1
2
3
4
5

Result:
2
4
6
8
10

*/