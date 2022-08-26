/*Implement program as per following specifications  :
1) Create static variable in Account class. 
Use this static variable to assign account numbers in incremental way to different Objects.
2) Create & call a static function which displays content of above static variable.*/

#include<iostream>
using namespace std;
class Account
{
	public:
	int size;
	long long int acn;
	static long long int acno;
	void generateacno()
	{
		acn=acno++;
	}
	void show()
	{
		cout<<"ACN: "<<acn<<endl<<endl;
	}
};
long long int Account::acno=1200000000;
int main()
{
	Account a;
	int ch;
	static int i=0;
	Account Accn[15];
	while(1)
	{
	cout<<"1.Generate Account Number\t2.Show\t3.Exit"<<endl<<"Select Option: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			Accn[i].acn=0;
			Accn[i++].generateacno();
			break;
		case 2:
			for(int j=0;j<i;j++)
			{
				cout<<"Account Number "<<j+1<<" : ";
				Accn[j].show();
			}
		case 3:
			return 0;
	}
 }
	return 0;
}
