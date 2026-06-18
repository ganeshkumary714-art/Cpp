#include<iostream>
using namespace std;

class demo{
int num;
public:
	void Info(){
		cin >> num;
	}
	void display(){
		cout << "The number is: " << num <<"\n";
	}

};

int main(){
	int n;
	cout << "degree of array number: ";
	cin >> n;
	demo d[n];
	cout << "Enter  a number: ";
	for(int i=0;i<n; i++){
		d[i].Info();
	}
	
	for(int i = 0; i<n;i++){
		d[i].display();
	}
	return 0;
}
