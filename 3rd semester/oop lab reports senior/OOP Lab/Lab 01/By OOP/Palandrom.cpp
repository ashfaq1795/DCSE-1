#include<iostream>
using namespace std;

class palandrom
{
	private:
		int num,comp,temp,rev;
	public:
		palandrom()
		{
			rev=0;
		}
		void process(int number)
		{
			num=number;
			while(num!=0)
			{
				temp=num%10;
				rev=rev*10+temp;
				num/=10;
			}
		}
		int ans()
		{
			return rev;
		}
	/*	bool compc()
		{
			if(rev==num)
			{
				return true;
			}
			
			else
			{
				return false;
			}
			
		}*/
};

int main()
{
	palandrom obj;
	int num;
	cin>>num;
	obj.process(num);
	obj.ans();
	//obj.compc();
	if(num==obj.ans())
	{
		cout<<"Number Is Palandrom: "<<endl;
	}
	else
	{
		cout<<"Number Is Palandrom: "<<endl;
	}
}
