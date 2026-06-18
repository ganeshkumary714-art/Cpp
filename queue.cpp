#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == 99) {
            cout << "Queue Overflow" << endl;
            return;
        }
        arr[++rear] = value;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        }
        front++;
    }

    void display() {
        if (front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter Queue elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        q.enqueue(value);
    }

    q.display();

    q.dequeue();
    cout << "After Dequeue: ";
    q.display();

    return 0;
}