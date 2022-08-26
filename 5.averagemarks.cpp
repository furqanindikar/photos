/* Define a class Student with private variable Marks for different subjects. 
Input students   details through a member function input (). Show the average of marks using friend function.*/
#include<iostream>
using namespace std;
struct marks{
	float OS,CN,OOPL,DSA;
};
class Student
{
	protected:
		
	public:
		struct marks m;
     void input()
	{
		cout<<"Enter Marks Obtained in"<<endl;
		cout<<"OS: ";cin>>m.OS;
		cout<<"CN: ";cin>>m.CN;
		cout<<"OOPL: ";cin>>m.OOPL;
		cout<<"DSA: ";cin>>m.DSA;
	}
	friend float average(Student );
};
float average(Student S)
{
	return (S.m.CN+S.m.DSA+S.m.OOPL+S.m.OS)/4;
}
int main()
{
	Student S;
	S.input();
	cout<<"Average: "<<average(S);
}
