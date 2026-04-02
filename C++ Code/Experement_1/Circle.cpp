#include <iostream>
using namespace std;

int main(){
    float r, area, circumference;

    cout << "Enter radius: ";
    cin >> r;

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    cout << "Area of Circle = " << area << endl;
    cout << "Circumferrence of Circle = " << circumference << endl;

    return 0;
}