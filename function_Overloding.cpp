#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator obj;

    int x, y, z;
    float p, q;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    cout << "Enter two float numbers: ";
    cin >> p >> q;

    cout << "\nSum of two integers = " << obj.add(x, y) << endl;
    cout << "Sum of three integers = " << obj.add(x, y, z) << endl;
    cout << "Sum of two float numbers = " << obj.add(p, q) << endl;

    return 0;
}
