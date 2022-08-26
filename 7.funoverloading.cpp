/*
	Write a program to overload multiply and sum function to multiply, add two int, two float and two double. 
	The return type of function should similar to type of parameter. 
*/
#include<iostream>
using namespace std;
class operations{
	public:
	int sum(int a,int b){
		return a+b;
	}
	float sum(float a,float b){
		return a+b;
	}
	double sum(double a,double b){
		return a+b;
	}
	
	int multiply(int a,int b){
		return a*b;
	}
	float multiply(float a,float b){
		return a*b;
	}
	double multiply(double a,double b){
		return a*b;
	}
};
int main(){
	operations OP;
	cout<<"Addition of Integers: "<<OP.sum(10,12)<<endl;
	cout<<"Addition of Float: "<<OP.sum(1298.463,4376.928)<<endl;
	cout<<"Addition of Double: "<<OP.sum(96539.692867,92879.746396)<<endl;
	cout<<endl;
	cout<<"Multiplication of Integers: "<<OP.multiply(10,12)<<endl;
	cout<<"Multiplication of Float: "<<OP.multiply(43.928,12.463)<<endl;
	cout<<"Multiplication of Double: "<<OP.multiply(939.692867,929.746396)<<endl;
	return 0;
}
