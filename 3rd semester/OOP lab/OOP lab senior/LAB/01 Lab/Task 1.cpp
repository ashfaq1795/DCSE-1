#include<iostream>
#include<stdlib.h>
using namespace std;
int swp(int &a,int &b);
int main()
{
	int n,i,j;
	cout<<"Enter size of Array: ";
	cin>>n; 
    int *p=(int *)(malloc(n*sizeof(int)));
    for(i=0;i<n;i++)
    {
    	cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(p[j]<p[j+1])
			swp(p[j],p[j+1]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	return 0;
}
int swp(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
