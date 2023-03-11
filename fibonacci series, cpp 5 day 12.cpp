#include <iostream>
using namespace std;
int fib(int f){
	if(f<2){
		return f;
	}
	//f = positions
	//so let us consider we need to find the value at position 4(which is 3)
	//f=3
	//f<2 4<2 not true
	//fib(4-2)=fib2 i.e the value at position 1
	//fib(4-1)=fib3 i.e the value at position 2
	//fib(4)=fib2+fib3; 1+2 = 3


return fib(f-2)+fib(f-1);
}
int main(){
	int a;
	cout<<"enter the position: "<<endl;
	cin>>a;
	cout<<"the value at position a is: "<<fib(a);
	return 0;
}

