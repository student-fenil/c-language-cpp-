#include <iostream>
using namespace std;

class shape
{
protected:
    int d1,d2;
public:
    virtual void area()=0;
};

class rect : public shape
{
public:
    rect(int x,int y)
    {
        d1=x;
        d2=y;
    }

    void area()
    {
        cout<<"\n area of rectangle"<<d1*d2;
    }
};
class triangle : public shape
{
public:
    triangle(int x,int y)
    {
        d1=x;
        d2=y;
    }

    void area()
    {
        cout<<"\n area of triangle "<<0.5*d1*d2;
    }
};

int main()
{
    shape *s1;
    rect r(10,10);
    triangle t(20,20);

    s1=&r;
    s1->area();

    s1=&t;
    s1->area();
    return 0;

}



/*output
 area of rectangle100
 area of triangle 200*/