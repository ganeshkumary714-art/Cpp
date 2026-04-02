#include <iostream>
using namespace std;

class Animal{
    private:
        string name;
        int age;
    public:
        void setData(string n, int a) {
            name = n;
            age = a;
        }

        void displayData() {
            cout << "Animal Name: " << name << endl;
            cout << "Animal Age: " << age << " years" << endl;
        }
};

int main(){
    Animal dog;

    dog.setData("Tommy", 5);

    dog.displayData();
    
    return 0;
}