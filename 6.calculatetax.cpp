/*Define class Account and IncomeTax  And make class IncomeTax friend class of class Account. 
class Account with private variable balance and class IncomeTax with variable Tax and 
function CalculateTax(), DisplayTax() to calculate and display the tax (10 % of balance).*/
#include<iostream>
using namespace std;
class IncomeTax;
class Account{
	int balance;
	public:
		
		setbalance()
		{
			cout<<"Enter Balance: ";cin>>balance;
		}
		show()
		{
			cout<<"Balance: "<<balance<<endl<<endl;
		}                      
		friend class IncomeTax;
};
class IncomeTax{
	int Tax;
	public:
	int CalculateTax(Account);           
	void DisplayTax(){
		cout<<"Calculated Tax: "<<Tax<<endl<<endl;
	}
};
int IncomeTax::CalculateTax(Account C)
{
	Tax=(C.balance*10)/100;
}
int main()
{
	Account A;
	IncomeTax I;
	A.setbalance();
	A.show();
	I.CalculateTax(A);
	I.DisplayTax();
	return 0;
}
