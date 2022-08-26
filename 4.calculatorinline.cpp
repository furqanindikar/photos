/*
	Write an inline functions to implement simple calculator (+,-*,/,%).
*/
#include<iostream>
using namespace std;
inline double Add(double x,double y)
{
	return x+y;
}
inline double Substract(double x,double y)
{
	return x-y;
}
inline double Multiply(double x,double y)
{
	return x*y;
}
inline double Divide(double x,double y)
{
	return x/y;
}
inline int Rem(int x,int y)
{
	return x % y;
}
int main(){
	int op;
	double x,y;
	
	while(1){
		cout<<"Enter Operands: ";cin>>x>>y;
		cout<<endl<<"1.Addition\t2.Substraction\t3.Multiplication\t4.Division\t5.Remainder\t6.Exit"<<endl;
		cout<<"Select operation: ";cin>>op;
		switch(op){
			case 1:
				cout<<"Addition of "<<x<<" and "<<y<<" is "<<Add(x,y)<<endl<<endl;
				break;
			case 2:
				cout<<"Substraction of "<<x<<" and "<<y<<" is "<<Substract(x,y)<<endl<<endl;
				break;
			case 3:
				cout<<"Multiplication of "<<x<<" and "<<y<<" is "<<Multiply(x,y)<<endl<<endl;
				break;
			case 4:
				cout<<"Division of "<<x<<" and "<<y<<" is "<<Divide(x,y)<<endl<<endl;
				break;
			case 5:
				cout<<"Remainder of "<<x<<"/"<<y<<" is "<<Rem(x,y)<<endl<<endl;
				break;
			case 6:
				exit(0);
			default:
				cout<<"Invalid Input"<<endl<<endl;
		}
	}
	return 0;
}
