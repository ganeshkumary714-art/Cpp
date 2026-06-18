#include<iostream>
using namespace std;
class Animal{
public:
	void eat(){
		cout << "Animal eat \n";
	}
};

class Mammal:public Animal{
public:
	void walk(){
		cout << "Mammals walk \n";
	}
};

class Pet{
public:
	void play(){
	cout << "Pets play \n";
	}
};

class Cat: public Mammal, public Pet{
public:
			void sound(){
				cout << "Cats \n";
			}
};

int main(){
	Cat c;
	c.eat();
	c.walk();
	c.play();
	c.sound();
	
	return 0;
}
