#include<iostream>
using namespace std;

class pelindrome
{
	public:
		int num,remain,reverse,temp;
		void chack();
};

void pelindrome:: chack()
{
	reverse=0;
	temp=num;
	while(temp>0)
	{
		remain=temp%10;
		temp=temp/10;
		reverse=reverse*10+remain;
	}
	if(reverse==num)
	{
		cout<<"Number "<<num<<" is Pelindrome: "<<endl;
	}
	else
	{
		cout<<"Number "<<num<<" is not Pelindrome: "<<endl;
	}
}

int main()
{
	pelindrome obj;
	cout<<"Enter a Number to check Wither a number is Pelindrome or Not: ";
	cin>>obj.num;
	obj.chack();
}
