#include<iostream>
using namespace std;
class Person{
 private:
 	string name;
 	int age;
 public:
 	void input(){
 		cout<<"Enter name :";
 		getline(cin,name);
 		
 		cout<<"Enter age:";
 		cin>> age;
 	}	
 	void display(){
 		cout<<"Name :"<<name;
 		cout<<endl;
 		cout<<"Age :"<<age;
 		cout<<endl;
 	}
};
int main(){
	Person p;
	p.input();
	p.display();
	return 0;
}
