#include <iostream>
#include <cstring>
using namespace std;

class media
{
protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }

    virtual void display() = 0;
};

class tape : public media
{
    float time;

public:
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }

    void display()
    {
        cout << "\nTitle : " << title;
        cout << "\nPrice : " << price;
        cout << "\nPlay Time : " << time << endl;
    }
};

class book : public media
{
    int pages;

public:
    book(char *s, float a, int p) : media(s, a)
    {
        pages = p;
    }

    void display()
    {
        cout << "\nTitle : " << title;
               cout << "\nPrice : " << price;
        cout << "\nPages : " << pages << endl;
    }
};

int main()
{
    char t1[50], t2[50];
    float p, pt;
    int pg;

    cout << "Enter Book Details\n";
    cout << "Title: ";
    cin >> t1;
    cout << "Price: ";
    cin >> p;
    cout << "Pages: ";
    cin >> pg;
    book bk(t1, p, pg);

    cout << "\nEnter Tape Details\n";
    cout << "Title: ";
    cin >> t2;
    cout << "Price: ";
    cin >> p;
    cout << "Play Time: ";
    cin >> pt;

    tape tp(t2, p, pt);

    media *list[2];
    list[0] = &bk;
    list[1] = &tp;

    cout << "\n\nBook Detail";
    list[0]->display();

    cout << "\nTape Detail";
    list[1]->display();

    return 0;
}


/*output

Enter Book Details
Title: c++
Price: 500
Pages: 300 

Enter Tape Details
Title: fenil
Price: 2200
Play Time: 15 min


Book Detail
Title : c++
Price : 500
Pages : 300

Tape Detail
Title : fenil
Price : 2200
Play Time : 15

*/