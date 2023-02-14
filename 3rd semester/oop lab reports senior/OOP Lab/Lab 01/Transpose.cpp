#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the Number of Rows OR Columns: ";
	cin>>n;
	int arr[n][n];
	int arrt[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	cout<<"The Orignale Matrix: "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    arrt[i][j]=arr[j][i];	
		}
	}
	cout<<"The Traspose of Matrix: "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arrt[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
