#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; 
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r(10, 5);

    r.area();

    return 0;
}
