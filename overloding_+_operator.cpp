#include <iostream>
using namespace std;

class Add{
private:
	int num;
	
public:
	Add(int n = 0){
		num =n;
	}
	
	Add operator+(Add obj){
		Add temp;
		temp.num = num + obj.num;
		return temp; 
	}
	void display(){
		cout << "sum = " << num << endl;
	}
};

int main(){
	Add obj1(35), obj2(26) , obj3;
	
	obj3 = obj1 + obj2;
	
	obj3.display();
	
	return 0;


}
