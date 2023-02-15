#include<iostream>
using namespace std;
int main()
{
	int num,n,digit,rev=0;
	cout<<"Enter a Five digits Number: ";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	cout<<"The revers of a number is: "<<rev<<endl;
	if(rev==n)
	cout<<"Number is Palindrom: ";
	else
	cout<<"Number is not Palindrom: ";
	return 0;
}
