#include<iostream>

using namespace std;
class Fact{
	private:
	long long n;
	public:
	void fact(){
		cout<<"Enter the Number :";
		cin>>n;
		if(n<=0){
		 cout<<"Invalid Input !";
		 exit(1);
		}
		long long fac=1;
		for(long long i=1;i<=n;i++){
			fac=(fac*i);
			
		}
		cout<<"Factorial of "<<n<<" is :"<<fac;
		cout<<endl;
	   }
};
int main(){
	Fact obj;
	obj.fact();
	
}
