/*	Define a class complex containing real  and imaginary integers as  a  data members, 
Overload + and -  operators to add and subtract two complex numbers.
Output: 
Complex No1: 3+7i 
Complex No2: 9+2i 
Addition =12+9i 
Subtraction= -6+5i
*/
#include<iostream>
using namespace std;
class complex{
	int real,imaginary;
	public:
	complex(int a,int b){
		real=a;
		imaginary=b;
	}
	complex(){
		real=3;
		imaginary=7;
	}
	void showdata()
	{
		cout<<" "<<real<<" + "<<imaginary<<"i ";
	}
	complex operator + (complex const &obj){
		complex result;
		result.real=real + obj.real;
		result.imaginary=imaginary + obj.imaginary;
		return result;
	}
	complex operator - (complex const &obj){
		complex result;
		result.real=real - obj.real;
		result.imaginary=imaginary - obj.imaginary;
		return result;
	}
};
int main()
{
	complex num1,num2(9,2),num3;
	num3=num1+num2;
	num1.showdata();
	cout<<" + ";
	num2.showdata();
	cout<<" = ";
	num3.showdata();
	cout<<endl;
	num3=num1-num2;
	num1.showdata();
	cout<<" - ";
	num2.showdata();
	cout<<" = ";
	num3.showdata();
	return 0;
}
