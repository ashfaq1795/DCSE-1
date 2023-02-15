#include <iostream>
using namespace std;
class bankaccount
{
private:
	int balance;
public:
	bankaccount()
	{
	balance=1700;
	}
	void deposite()
	{
	balance+=500;	
	}
    void withdrawl()
	{
	if(balance>500)
	balance-=500;
	else 
	cout<<"your balance is insufficent \n";
	}
	void print()
	{
	cout<<balance<<endl;
	}
};
int main()
{
	bankaccount b1=bankaccount();
	cout<<"your present balance is:  \n";
	b1.print();
	b1.deposite();
	cout<<"your new balance after deposition is: ";
	b1.print();
	b1.withdrawl();
	cout<<"your new balance after withdrawl is: ";
    b1.print();
	b1.withdrawl();
	cout<<"your new balance after withdrawl is: ";
	b1.print();
	b1.withdrawl();
	cout<<"your new balance after withdrawl is: ";
	b1.print(); 
	b1.withdrawl();
	cout<<"your new balance after withdraw is: ";
	b1.print();
	b1.withdrawl();
	cout<<"your current balance is: ";
	b1.print();

	return 0;
}
