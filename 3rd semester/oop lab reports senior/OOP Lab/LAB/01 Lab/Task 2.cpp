#include<iostream>
using namespace std;
int gcd(int x,int y);
int main()
{
	int x,y;
	cout<<"Enter Two Positive Numbers: "<<endl;
	cin>>x>>y;
	cout<<"G.C.D of "<<x<<" and "<<y<<" is: "<<gcd(x,y);
	return 0;
}
int gcd(int x,int y)
{
	if(y==0)
	return x;
	else
	return gcd(y,x%y);
}

