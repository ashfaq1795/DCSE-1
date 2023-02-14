#include<iostream>
using namespace std;

class binary_to_decimal
{
	private:
		int binum,temp,i,decimal;
	public:
		binary_to_decimal()
		{
			i=1;
			decimal=0;
		}
		void getbinum(int bnum)
		{
			binum=bnum;
		}
		void process()
		{
			while(binum!=0)
			{
				temp=binum%10;
				decimal=decimal+temp*i;
				binum/=10;
				i*=2;
			}
		}
		int getvalue()
		{
			return decimal;
		}	
};

int main()
{
	binary_to_decimal obj;
	int bnum;
	cin>>bnum;
    obj.getbinum(bnum);
    obj.process();
    cout<<obj.getvalue();
}
