#include<iostream>
using namespace std;

class A
{
    public:
    void display(int a)
    {
        cout<<a<<endl;
    }
    void display(double b)
    {
        cout<<b<<endl;
    }
    void display(char *name)
    {
        cout<<name<<endl;
    }
};

int main()
{
    A a1;
    a1.display(1);
    a1.display(1.2);
    a1.display("abc");
    return 0;
}