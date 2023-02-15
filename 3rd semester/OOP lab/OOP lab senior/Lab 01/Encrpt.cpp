#include<iostream>
using namespace std;
int main()
{
	int arr[4],i,encr[4],decr[4];
	for(i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Originol Number: "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	for(i=0;i<4;i++)
	{
		encr[i]=(arr[i]+7)%10;
	}
	cout<<endl;
	cout<<"Encrepted: "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<encr[i];
	}
	cout<<endl<<endl;
	cout<<"After swaping: "<<endl;
	cout<<encr[2]<<encr[3]<<encr[0]<<encr[1];
	
	for(i=0;i<4;i++)
	{
		decr[i]=(encr[i]+10)-7;
	}
	cout<<endl;
	cout<<endl<<"Decripted: "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<decr[i];
	}
	cout<<endl;
	return 0;
}
