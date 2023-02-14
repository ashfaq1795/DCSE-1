#include<iostream>
using namespace std;
int main()
{
	int binum,temp,i=1,decimal=0;
	cout<<"Enter Binary Number: ";
	cin>>binum;
	while(binum!=0)
	{
		temp=binum%10;
		decimal+=temp*i;
		binum/=10;
		i*=2;
	}
	cout<<endl<<"The Decimal of Binary Number Is:  "<<decimal<<endl;
	return main();
}

