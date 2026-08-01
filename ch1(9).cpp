#include <iostream>
using namespace std;

class Student
{
private:
    int roll, marks[5], total;
    float per;
    char name[30];

public:
    void getdata();
    void putdata();
};

Student s[10];

void Student::getdata()
{
    total = 0;

    cout << "\nEnter Roll No: ";
    cin >> roll;
   cout << "Enter Name: ";
    cin >> name;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks of Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    per = total / 5.0;
}
void Student::putdata()
{
    cout << "\n-------------------------------";
    cout << "\nRoll No : " << roll;
    cout << "\nName    : " << name;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nMarks " << i + 1 << " : " << marks[i];
    }

    cout << "\nTotal   : " << total;
    cout << "\nPercentage : " << per << "%";
    cout << "\n-------------------------------\n";
}

int main()
{
    int n;
     cout << "Enter Number of Students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;
        s[i].getdata();
    }

    cout << "\n========== MARKSHEET ==========\n";

    for (int i = 0; i < n; i++)
    {
        s[i].putdata();
    }

    return 0;
}

/*output
Enter Details of Student 1

Enter Roll No: Enter Name: Enter Marks of Subject 1: Enter Marks of Subject 2: Enter Marks of Subject 3: Enter Marks of Subject 4: Enter Marks of Subject 5: 
========== MARKSHEET ==========

-------------------------------
Roll No : 0
Name    : 
Marks 1 : 0
Marks 2 : 0
Marks 3 : 0
Marks 4 : 0
Marks 5 : 0
Total   : 0
Percentage : 0%
-------------------------------

*/