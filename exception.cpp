#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age;
        }

        cout << "You are eligible to vote." << endl;
    }

    catch (int x) {
        cout << "Exception caught!" << endl;
        cout << "Age " << x << " is not eligible for voting." << endl;
    }

    return 0;
}
