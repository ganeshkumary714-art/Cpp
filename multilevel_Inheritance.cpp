#include <iostream>
using namespace std;

class Student
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter student name: ";
        cin >> name;
    }
};

class Exam : public Student
{
protected:
    int marks;

public:
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Result : public Exam
{
public:
    void display()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result obj;

    obj.getName();
    obj.getMarks();

    obj.display();

    return 0;
}