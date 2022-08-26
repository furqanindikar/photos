/*2.Write a C++ program to 	Create Class Cube and find volume (Implement Parameterized Constructor Concept)
	Create Class Rectangle to find area (Implement Default Constructor Concept) 
	and then find perimeter*/
#include<iostream>
using namespace std;
class Cube{
	int l,Vol;
	public:
		Cube(int L){
			l=L;
		}
		int volume(){
			Vol=l*l*l;
			return Vol;
		}
};
class Rectangle{
	int l,b,a,p;
	public:
	Rectangle(){
		l=10;
		b=5;
	}
	int area(){
		a=l*b;
		return a;
	}
	Rectangle(const Rectangle& r){
		l=r.l;
		b=r.b;
	}
	int perimeter(){
		p=l+b;
		return p;
	}
};
int main(){
	Cube c(10);
	Rectangle r;
	cout<<"Volume of Cube: "<<c.volume()<<endl;
	cout<<"Area of Rectangle: "<<r.area()<<endl;
	Rectangle r1=r;
	cout<<"Perimeter of Rectangle: "<<r1.perimeter()<<endl;
	return 0;
}
