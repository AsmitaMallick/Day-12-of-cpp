#include<iostream>
using namespace std;
//inline function=this improves the execution time and speed of the program. this works for code with chhota code lines.
inline int product(int a, int b){

return a*b+1;}
int main(){
	int a, b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"the product of a and b is "<<product(a,b);
	return 0;
	
}
