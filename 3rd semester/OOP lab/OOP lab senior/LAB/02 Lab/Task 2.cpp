#include<iostream>
using namespace std;

class bankAccount
{
	public:
		bankAccount()
		{
			currentbalance=20000;
		}
		void setDeposit(int Depositbalance)
		{
			currentbalance+=Depositbalance;
		}
		void setWithdrawal(int Withdrawalbalance)
		{
			currentbalance-=Withdrawalbalance;
		}
		long getBalance()
		{
			return currentbalance;
		}
	private:
		long currentbalance;
	
};

int main()
{
	char check;
	long Deposit,Withdrawal;
	bankAccount custamer1;
	cout<<"Assalm o Alaikum!!! \n Welcome to the Bank BACHA: "<<endl;
	cout<<"Your Current Balance is: "<<custamer1.getBalance()<<endl;
	cout<<"Enter 'D' to deposit Your mony: \n Or 'W' to Withdraw your mony: "<<endl;
	cin>>check;
	if(check=='d' || check=='D')
	{
		cout<<"Enter the Balance you want to deposit: ";
		cin>>Deposit;
		custamer1.setDeposit(Deposit);
		cout<<"Now your current Balance is: "<<custamer1.getBalance()<<endl;
	}
	else if(check=='w' || check=='W')
	{
		cout<<"Enter the Balance you want to Withdraw: ";
		cin>>Withdrawal;
		custamer1.setWithdrawal(Withdrawal);
		cout<<"Now your current Balance is: "<<custamer1.getBalance()<<endl;
	}
	return 0;
}
