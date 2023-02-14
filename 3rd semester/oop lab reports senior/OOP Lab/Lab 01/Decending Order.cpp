#include<iostream>
void swp(int &a,int &b);
using namespace std;
int main()
{
	int i,j,size;
	cout<<"Enter Number of Element that You Want to Reverse: ";
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"The Element that you Entered: "<<endl<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]<arr[j+1])
			swp(arr[j],arr[j+1]);
		}
	}
	cout<<endl<<"The Revers Array is: "<<endl<<endl;
	for(i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
	
}
void swp(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
