
#include<iostream>
using namespace std;
int main()
{
	int num,comp,temp,rev=0;
	cin>>num;
	comp=num;
	while(num!=0)
	{
		temp=num%10;
		rev=rev*10+temp;
		num/=10;
	}
	cout<<"The Reverse of Number Is: "<<rev<<endl;
	if(rev==comp)
	{
		cout<<"Number Is Palindrom: "<<endl;
	}
	else
	{
		cout<<"Number Is Not Palindrom: "<<endl;
	}
}

