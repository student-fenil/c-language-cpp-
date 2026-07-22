#include <iostream>
using namespace std;

// Class Definition
class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Object Creation
    Student s1;

    // Assigning Values
    s1.name = "fenil";
    s1.age = 19;

    // Calling Member Function
    s1.display();

    return 0;
}



/*Name: fenil
Age: 19
*/