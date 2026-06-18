#include <iostream>
using namespace std;

void testFunction() {
    try {
        cout << "Inside testFunction()" << endl;

        throw 100;
    }

    catch (int x) {
        cout << "Exception caught in testFunction(): " << x << endl;

        
        throw;
    }
}

int main() {
    try {
        testFunction();
    }

    catch (int x) {
        cout << "Exception caught in main(): " << x << endl;
    }

    return 0;
}
