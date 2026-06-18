#include<iostream>
using namespace std;

class Arrayops{
	private:
	int n,arr[100];
	public:
	 void accept(int size){
	 	n=size;
	 	for(int i=0;i<n;i++) cin>>arr[i];
	 	cout<<endl;
	 }
	 void display(){
	 
	 	for(int i=0;i<n;i++){
	 		cout<<arr[i]<<" ";
	 	}
	 	cout<<endl;
	 }
	 void sort(){
	 	for(int i=0;i<n-1;i++){
	 		for(int j=0;j<n-1;j++){
	 			if(arr[j]>arr[j+1]){
	 				int t=arr[j];
	 				arr[j]=arr[j+1];
	 				arr[j+1]=t;
	 			}
	 		}
	 	}
	 }
};
int main(){
	Arrayops obj;
	int ch,n;
	int nu=0;
	do{     cout<<"Enter Your Choice :";
		cout<<"1.Accept 2.Display 3.Sort 4.Exit\n";
		cin>>ch;
		switch(ch){
			case 1:cout<<"Enter the Num of Elem: ";cin>>n;nu=n;cout<<"Enter the elements: ";obj.accept(nu);break;
			case 2:if(nu==0){ cout<<"Empty Array";cout<<endl;
			    break;
			}; obj.display();break;
			case 3:if(nu==0){ cout<<"Empty Array";cout<<endl;
			    break;
			};obj.sort();break;
	}
	}while(ch!=4);
	return 0;
}
