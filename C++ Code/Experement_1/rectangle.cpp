#include <iostream>
using namespace std;

int main(){
    float l, b;
    cout << "Enter Length of Rectangle: ";
    cin >> l;

    cout << "Enter breadth of Rectangle: ";
    cin >> b;

    if (l > 0 && b > 0) {

        float area = l * b;
        float perimeter = 2 * (l + b);

        cout << "\nRectangle is valid!" << endl;
        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;

    } else {
        cout << "\nInvalid input! Length and breadth must be positive." << endl;
    }

    return 0;
}