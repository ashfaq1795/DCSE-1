#include<iostream>
int gcd(int x,int y);
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter X: ";
	cin>>x;
	cout<<"Enter Y: ";
	cin>>y;
	cout<<endl<<"GCD of "<<x<<" and "<<y<<" Is: "<<gcd(x,y);
	return 0;
}
int gcd(int x,int y)
{
	if(y==0)
	return x;
	else 
	return gcd(y,x%y);
}
