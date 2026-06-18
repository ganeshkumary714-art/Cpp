#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter choice (1, 2, or 3): ";
    cin >> choice;

    try {
        if (choice == 1)
            throw 10;

        else if (choice == 2)
            throw 5.5;

        else if (choice == 3)
            throw 'A';

        else
            cout << "No exception occurred." << endl;
    }

    catch (int x) {
        cout << "Integer exception caught: " << x << endl;
    }

    catch (double y) {
        cout << "Double exception caught: " << y << endl;
    }

    catch (char z) {
        cout << "Character exception caught: " << z << endl;
    }

    return 0;
}
