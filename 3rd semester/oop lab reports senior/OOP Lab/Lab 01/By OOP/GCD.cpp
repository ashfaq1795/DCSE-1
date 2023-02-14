#include<iostream>
using namespace std;

class gcd
{
	private:
		int x,y,ans,greatest;
	public:
		gcd()
		{
			x=0;
			y=0;
			ans=0;
		}
	/*	gcd(int a,int b)
		{
			x=a;
			y=b;
		}*/
		void process(int x,int y)
		{
		if(x>y)
		greatest=x;
		else
		greatest=y;
		for(int i=1;i<greatest;i++)
		{
		if(x%i==0 && y%i==0)
		{
			ans=i;
		}
		}
		}
		int disply()
		{
			return ans;
		}
};

int main()
{
	gcd obj;
	int a,b,gcd;
	cin>>a;
	cin>>b;
	obj.process(a,b);
    gcd=obj.disply();
    cout<<gcd;
}
