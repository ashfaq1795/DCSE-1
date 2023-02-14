#include<iostream>
using namespace std;

class rationalNumbers
{
	private:
		int a,b;
	public:
		rationalNumbers(int x,int y);
		void display();
		rationalNumbers operator+(rationalNumbers num);
		rationalNumbers operator-(rationalNumbers num);
		rationalNumbers operator*(rationalNumbers num);
		rationalNumbers operator/(rationalNumbers num);
		bool operator>(rationalNumbers num);
		bool operator<(rationalNumbers num);
		bool operator>=(rationalNumbers num);
		bool operator<=(rationalNumbers num);
		bool operator==(rationalNumbers num);
		bool operator!=(rationalNumbers num);
};

rationalNumbers::rationalNumbers(int x=0,int y=0)
{
	if(y==0)
	y=1;
	if(x!=0 && y!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(x%i==0 && y%i==0)
			{
				x=x/i;
				y=y/i;
			}
		}
	}
	
	a=x;
	b=y;
}



void rationalNumbers::display()
{
	cout<<a<<"/"<<b<<endl;
}

rationalNumbers rationalNumbers::operator+(rationalNumbers num)
{
	rationalNumbers sum;
	sum.a=(a*num.b) + (b*num.a);
	sum.b=(b*num.b);

	return sum;
}

rationalNumbers rationalNumbers::operator-(rationalNumbers num)
{
	rationalNumbers diff;
	diff.a=(a*num.b) - (b*num.a);
	diff.b=(b*num.b);

	return diff;
}

rationalNumbers rationalNumbers::operator*(rationalNumbers num)
{
	rationalNumbers product;
	product.a = a*num.a;
	product.b = b*num.b;

	return product;
}
rationalNumbers rationalNumbers::operator/(rationalNumbers num)
{
	rationalNumbers division;
	division.a= a*num.b;
	division.b=num.a*b;

	return division;
}

bool rationalNumbers::operator>(rationalNumbers num)

{
	if(((float) a/(float) b)>((float)num.a/(float) num.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool rationalNumbers::operator<(rationalNumbers num)
{
	if(((float) a/(float) b)<((float)num.a/(float) num.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool rationalNumbers::operator>=(rationalNumbers num)
{
	if(((float) a/(float) b)>=((float)num.a/(float) num.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool rationalNumbers::operator<=(rationalNumbers num)
{
	if(((float) a/(float) b)<=((float)num.a/(float) num.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool rationalNumbers::operator==(rationalNumbers num)
{
	if(((float) a/(float) b)==((float)num.a/(float) num.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool rationalNumbers::operator!=(rationalNumbers num)
{
	if(((float) a/(float) b)!=((float)num.a/(float) num.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	rationalNumbers num1(5,1),num2(1,2),sum,diff,product,division;
	cout<<"Num1 is: ";
	num1.display();
	cout<<"Num2 is: ";
	num2.display();
	sum=num1+num2;
	cout<<"Sum of Num1 and Num2 Is: ";
	sum.display();

	diff=num1-num2;
	cout<<"diff of Num1 and Num2 Is: ";
	diff.display();
	
	product=num1*num2;
	cout<<"Product of Num1 and Num2 is: ";
	product.display();
	
	division=num1/num2;
	cout<<"Division of Num1 and Num2 is: ";
	division.display();
	
	if(num1>num2)
	{
		cout<<"Num1 > Num2: "<<endl;
	}
	
	if(num1<num2)
	{
		cout<<"Num1 < Num2: "<<endl;
	}
	
	if(num1>=num2)
	{
		cout<<"Num1 >= Num2: "<<endl;
	}
	
	if(num1<=num2)
	{
		cout<<"Num1 <= Num2: "<<endl;
	}
	
	if(num1==num2)
	{
		cout<<"Num1 = Num2: "<<endl;
	}
	
	if(num1!=num2)
	{
		cout<<"Num1 != Num2: "<<endl;
	}
	return 0;
}



















































































/*	if(sum.a!=0 && sum.b!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(sum.a%i==0 && sum.b%i==0)
			{
				sum.a=sum.a/i;
				sum.b=sum.b/i;
			}
		}
	}*/
/*	if(diff.a!=0 && diff.b!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(diff.a%i==0 && diff.b%i==0)
			{
				diff.a=diff.a/i;
				diff.b=diff.b/i;
			}
		}
	}*/
/*	if(product.a!=0 && product.b!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(product.a%i==0 && product.b%i==0)
			{
				product.a=product.a/i;
				product.b=product.b/i;
			}
		}
	}*/
/*	if(division.a!=0 && division.b!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(division.a%i==0 && division.b%i==0)
			{
				division.a=division.a/i;
				division.b=division.b/i;
			}
		}
	}*/

