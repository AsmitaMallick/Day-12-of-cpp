#include<iostream>
using namespace std;

float moneyRecieved(int currentMoney, float factor=1.04){
	return currentMoney * factor;
	
}
//we are giving the int value but the float is not given, so the float is known as default argument.
//default arguments should be on right.
//compulsory arguments will be on left.
int main(){
	int a,b;
	int money;
	cout<<"enter the amount of money: "<<endl;
	cin>> money;
	cout<<"if u have "<<money<<" rs in your bank account, you will recieve "<<moneyRecieved(money)<<" rs in 1 year"<<endl;
	cout<<"if u r a VIP and have "<<money<<" rs in your bank account, you will recieve "<<moneyRecieved(money, 1.1)<<" rs in 1 year"<<endl;
	
	return 0;
}

