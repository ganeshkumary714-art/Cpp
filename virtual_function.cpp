#include<iostream>
using namespace std;

class Student{
public:
	virtual void sound(){
		cout << "Student make noise\n";
	}
};

class Raju: public Student{
public:
	void sound() override{
		cout << "Raju is good boy \n";
	}
};

int main(){
	Student *s;
	Raju r;
	s=&r;
	s-> sound();
	return 0;
	

}
