#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int size,i,j;
	cout<<"Enter the Size of Array: ";
	cin>>size;
	float *arr = new float[size];
	for(i=0;i<size;i++)
	{
		cin>>*(arr+i);
	}
	for(i=1;i<size;i++)
	{
			if(arr[0]<*(arr+i))
			{
				arr[0]=*(arr+i);
			}
	}
	cout<<"The Largest from the Numbers Is: "<<arr[0]<<" ";
	return 0;
}

