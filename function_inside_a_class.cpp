#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int Roll;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter student age: ";
        cin >> age;
        
        cout << "Enter student Roll Number: ";
        cin >> Roll;
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << Roll << endl;
    }
};

int main() {
    Student s1;

    s1.input();
    s1.display();

    return 0;
}
