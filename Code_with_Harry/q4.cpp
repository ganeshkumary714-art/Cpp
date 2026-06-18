#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count;

int main()
{
    Employee Ganesh, Ravi, Arun;

    Ganesh.setData();
    Ganesh.getData();
    Employee::getCount();

    Ravi.setData();
    Ravi.getData();
    Employee::getCount();

    Arun.setData();
    Arun.getData();
    Employee::getCount();
    return 0;
}