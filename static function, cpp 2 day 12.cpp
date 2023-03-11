#include<iostream>
using namespace std;
int product(int a, int b){
static int c = 0; // this executes only once.
c = c+1;//next time this function is run, the value of c will be retained.
return a*b+c;}
int main(){
	int a, b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"the product of a and b is "<<product(a,b)<<endl;
	cout<<"the product of a and b is "<<product(a,b)<<endl;//the value of c got incremented.
	return 0;
	
}
//not recommended to use this.
