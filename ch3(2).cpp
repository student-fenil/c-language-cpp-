#include<iostream>
using namespace std;
class data
{
    private:
    int a,b;
    public:
    data()
    {
        a=0;
        b=0;
    }
    data(int x,int y)
    {
        a=x;
        b=y;
    }
    data operator+(data d2) //binary operator +
    {
        data d;
        d.a=a+d2.a;
        d.b=b+d2.b;
        return(d);
    }
    void operator-() //unary operator
    {
        a=-a;
        b=-b;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
    int main()
    {
        data d1(-1,-1),d2(2,2),d3;
        d1.operator-();
        //-d1;
        d1.display();
        d3=d1.operator+(d2);
        //d3-d1+d2;
        d3.display();
        return 0;
    }


/*output
a=1
b=1
a=3
b=3
*/