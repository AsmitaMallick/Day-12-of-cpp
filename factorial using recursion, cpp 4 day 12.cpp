#include<iostream>
using namespace std;
int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
	//n! = n*(n-1)
}
int main(){
	int a;
	cout<<"enter the value: "<<endl;
	cin>>a;
	cout<<"the value of factorial is: "<<factorial(a)<<endl;
	return 0;
	
}
