#include <iostream>
using namespace std;

class Student {
private:
    static int count;
    string name;

public:
    void getData() {
        cout << "Enter student name: ";
        cin >> name;

        count++;
    }

    void displayData() {
        cout << "Student Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total Students Entered: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\nStudent Details" << endl;
    for (int i = 0; i < n; i++) {
        s[i].displayData();
    }

    Student::showCount();

    return 0;
}
