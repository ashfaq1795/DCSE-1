#include<iostream>
using namespace std;
template <typename T>
T avg(T *a)
{
    T sum=0;
    for(int i=0; i<5; i++)
    {
        sum=sum+a[i];
    }
    sum=sum/5;
    return sum;
}
int main()
{
	

	int ob1, a[5]={1,2,3,4,5};
    ob1=avg<int>(a);
    
	cout<< ob1<<endl;
    
    double ob2, b[5]={2,2.1222222,1,0.3,4};
    ob2=avg<double>(b);
    cout<< ob2;

    return 0;
}
