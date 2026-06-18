#include <iostream>
using namespace std;

// Stack Class
class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == 99)
            cout << "Stack Overflow\n";
        else
            arr[++top] = value;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            top--;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;

    int n, value;

    // Stack Input
    cout << "Enter number of elements for Stack: ";
    cin >> n;

    cout << "Enter Stack elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        s.push(value);
    }

    s.display();

    return 0;
}