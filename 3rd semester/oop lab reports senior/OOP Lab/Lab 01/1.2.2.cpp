#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double mean,ans=0,res,answer;
	double sum=0;
	cin>>n;
	int arr[n],i,j;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	cout<<"Totle: "<<sum<<endl;
	mean=sum/n;
	cout<<"Mean: "<<mean<<endl;
	for(i=0;i<n;i++)
	{
		ans+=pow((arr[i]-mean),2);
	}
	res=ans/(n-1);
	cout<<endl<<"Before squere root: "<<res<<endl;
	answer=pow(res,0.5);
	cout<<"Answer: (+-) ";
	cout<<answer;
	
	return 0;
}
