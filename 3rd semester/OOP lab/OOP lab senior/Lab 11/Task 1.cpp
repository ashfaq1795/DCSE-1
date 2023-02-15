#include<iostream>
using namespace std;

template <typename T>
T averag(T arr[5])
{
	T sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	sum/=5;
	return sum;
}
int main()
{
	float ob,arr[5]={1,2,3,4.4,3.1};
	ob=averag<float> (arr);
	cout<<ob;
	return 0;
}
