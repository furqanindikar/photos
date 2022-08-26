/*
Create a class Person and two derived classes Employee, and Student, inherited from 
class  Person.  Now  create  a  class  Manager  which  is  derived  from  two  base  classes 
Employee and Student. Show the use of the virtual base class.
*/
#include<iostream>
using namespace std;
class Person{
	public:
	virtual void show(){
		cout<<"Class Person"<<endl;
	}
};
class Employee:public Person{
	public:
	virtual void show(){
		cout<<"Class Employee"<<endl;
	}
};
class Student:public Person{
	public:
	virtual void show(){
		cout<<"Class Student"<<endl;
	}
};
class Manager:public Employee,public Student{
	public:
	void show(){
		cout<<"Class Manager"<<endl;
	}
};
int main()
{
	Person p,*e,*s;
	Employee em,*mn;
	Student stu,*Mn;
	Manager Man;
	e=&em;
	s=&stu;
	mn=&Man;
	Mn=&Man;
	p.show();
	e->show();
	s->show();
	cout<<endl;
	em.show();
	mn->show();
	cout<<endl;
	stu.show();
	Mn->show();
		cout<<endl;

	Man.show();
	return 0;
}
