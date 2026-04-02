#include <iostream>
using namespace std;

//Creating a class
class Student {
public:
    //Data members
    string name;
    int roll;

    //Member function
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
    }
};

int main(){
    // Creating object of Student class
    Student s1;

    // Assigining values
    s1.name = "Ganesh";
    s1.roll = 101;

    //Calling member function
    s1.display();

    return 0;
}