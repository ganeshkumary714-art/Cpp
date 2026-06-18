#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void operator-()
    {
        num = -num;
    }

    void display()
    {
        cout << "Number after unary minus: " << num << endl;
    }
};

int main()
{
    Number obj;

    obj.getData();

    -obj;

    obj.display();

    return 0;
}