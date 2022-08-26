/*
[Multilevel Inheritance] Make a class Employee with a name and salary. 
Make a class Manager inherit from Employee. Add an instance variable, named department, of type string. 
Supply a method to string that prints the manager's name, department and salary. Make a class Executive inherit from Manager. Supply a method to string that prints the string "Executive" followed by the information stored in the Manager super class object. Supply a test program that tests these classes and methods.
*/

#include<iostream>
using namespace std;
class Employee{
	string name;
	int salary;
	public:
	getdata(){
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Salary: ";
		cin>>salary;
		cout<<endl;
	}
	showdata(){
		cout<<"Name: "<<name<<endl;
		cout<<"Salary: "<<salary<<endl<<endl;
	}
};
class manager:public Employee{
	string department;
	public:
		get_data()
		{
			cout<<"Enter Department: ";
			cin>>department;
			getdata();
			
		}
		show_data()
		{
			cout<<"Department: "<<department<<endl;
			showdata();
		}
};
class executive:public manager{
	public:
		get(){
			get_data();
		}
		show()
		{
			cout<<"Executive Manager"<<endl;
			show_data();
		}
};
int main()
{
	Employee e;
	manager m;
	executive ex;
	e.getdata();
	cout<<"Employee Details:"<<endl;
	e.showdata();
	m.get_data();
	cout<<"Manager Details:"<<endl;
	m.show_data();
	ex.get();
	cout<<"Executive Details:"<<endl;
	ex.show();
}
