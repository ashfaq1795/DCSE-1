#include<iostream>
using namespace std;

class BankAccount
{
	private:
		int balance;
	public:
		BankAccount()
		{
			balance=1000;
		}
		void deposit(int deposit)
		{
			balance+=deposit;
		}
		void withdrawal(int withdrawal)
		{
			if(balance<withdrawal)
			{
				cout<<"Out of Range: "<<endl;
			}
			else
			{
				balance-=withdrawal;
			}
			
		}
		int show_balance()
		{
			return balance;
		}
};

int main()
{
	BankAccount obj;
	char ch;
	int deposit,withd;
	cout<<obj.show_balance()<<endl;
	cout<<"Enter d for Deposit and w for withdrawal: ";
	cin>>ch;
	if(ch=='d')
	{
		cout<<"Enter balance for Deposit: ";
		cin>>deposit;
		
		obj.deposit(deposit);
		cout<<"Your Balance Is: ";
		cout<<obj.show_balance();
	}
	else if(ch=='w')
	{
		cout<<"Enter Balance you want to withdraw: ";
		cin>>withd;
		obj.withdrawal(withd);
		cout<<"Your Balance Is: ";
		cout<<obj.show_balance();
	}
	return 0;
}

