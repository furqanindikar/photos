/*
1.	Write a C++ program to print student details using 
constructor and destructor
*/
#include<iostream>
using namespace std;
class Information{
		string Name,Class,College;
		long ID;
	public:
		Information(long id)
		{
			fflush(stdin);
			cout<<"Name: ";
			getline(cin,Name);
			fflush(stdin);
			cout<<"Class: ";
			getline(cin,Class);
			fflush(stdin);
			cout<<"College: ";
			getline(cin,College);
			fflush(stdin);//fflush is used
			ID=id;
		}
		void show(){
			cout<<"Name: "<<Name<<endl;
			cout<<"ID: "<<ID<<endl;
			cout<<"Class: "<<Class<<endl;
			cout<<"College: "<<College<<endl;
			cout<<endl;
		}
		~Information() 
		{
			cout<<"Class for ID: "<<ID<<" Destructed"<<endl;
		}
};
int main()
{
	int n;
	int i=0;
	long id;
		cout<<"Enter ID: ";
		cin>>id;
		Information St(id);
		cout<<endl<<"Details"<<endl;
		St.show();
	return 0;
}
