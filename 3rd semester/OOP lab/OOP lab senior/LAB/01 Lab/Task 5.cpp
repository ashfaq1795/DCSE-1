// Binary to Desimal
#include<iostream>
using namespace std;
int main()
{
	int num,disimal=0,i=1,rem;
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		disimal=disimal+rem*i;
		num=num/10;
		i=i*2;
	}
	cout<<disimal;
}

/* Desimal to Binary
#include<iostream>
using namespace std;
int main()
{
	int num,binary=0,i=1,rem;
	cin>>num;
	while(num!=0)
	{
		rem=num%2;
		binary=binary+rem*i;
		num=num/2;
		i=i*10;
	}
	cout<<binary;
}
*/
