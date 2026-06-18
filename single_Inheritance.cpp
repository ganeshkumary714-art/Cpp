#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    void getStudent()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Marks : public Student
{
private:
    int marks;

public:
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Marks obj;

    obj.getStudent();
    obj.getMarks();

    obj.display();

    return 0;
}