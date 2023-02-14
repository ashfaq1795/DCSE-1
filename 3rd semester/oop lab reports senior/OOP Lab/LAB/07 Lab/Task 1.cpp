#include<iostream>
using namespace std;

class rationalNumbers
{
	private:
		int a,b;
	public:
		rationalNumbers(int x,int y);
		void displayRational();
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
};
void rationalNumbers::displayRational()
{
	cout<<a<<"/"<<b<<endl;
};
rationalNumbers rationalNumbers::operator+(rationalNumbers num)
{
	rationalNumbers sum;
	sum.a=(a*num.b)+(num.a*b);
	sum.b=(num.b*b);
	if(sum.a!=0 && sum.b!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(sum.a%i==0 && sum.b%i==0)
			{
				sum.a=sum.a/i;
				sum.b=sum.b/i;
			}
		}
	}
	return sum;
};
rationalNumbers rationalNumbers::operator-(rationalNumbers num)
{
	rationalNumbers diff;
	diff.a=(a*num.b)-(num.a*b);
	diff.b=(num.b*b);
	if(diff.a!=0 && diff.b!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(diff.a%i==0 && diff.b%i==0)
			{
				diff.a=diff.a/i;
				diff.b=diff.b/i;
			}
		}
	}
	return diff;
}; 

rationalNumbers rationalNumbers::operator*(rationalNumbers num)
{
	rationalNumbers product;
	product.a=a*num.a;
	product.b=num.b*b;
	if(product.a!=0 && product.b!=0)
	{
		for(int i=9;i>=2;i--)
		{
			while(product.a%i==0 && product.b%i==0)
			{
				product.a=product.a/i;
				product.b=product.b/i;
			}
		}
	}
    return product;
};

rationalNumbers rationalNumbers::operator/(rationalNumbers num)
{
	rationalNumbers div;
	div.a=a*num.b;
	div.b=num.a*b;
	if(div.a!=0 && div.b!=0)
	{
		for(int i=9;i>=2;i++)
		{
			while(div.a%i==0 && div.b%i==0)
			{
				div.a=div.a/i;
				div.b=div.b/i;
			}
		}
	}
	return div;
};
bool rationalNumbers::operator>(rationalNumbers num)
{
	if(((float) a/(float) b) > ((float) num.a/(float) num.b))
	{
		return true;
	}
	else
	{
		return false;
	}
};

bool rationalNumbers::operator<(rationalNumbers num)
{
	if(((float) a/(float)b) < ((float) num.a/(float) num.b))
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool rationalNumbers ::  operator>=(rationalNumbers num)
{
	if(((float) a/(float)b) >= ((float) num.a/(float) num.b))
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool rationalNumbers :: operator<=(rationalNumbers num)
{
	if(((float) a/(float)b) <= ((float) num.a/(float) num.b))
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool rationalNumbers :: operator==(rationalNumbers num)
{
	if(((float) a/(float)b) == ((float) num.a/(float) num.b))
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool rationalNumbers :: operator!=(rationalNumbers num)
{
	if(((float) a/(float)b) != ((float) num.a/(float) num.b))
    {
        return true;
    }
    else
    {
        return false;
    }
};


int main()
{
	rationalNumbers num1(6,2), num2(10,4), sum, difference, product, qoutient;
	cout<<"Num1 is : ";
	num1.displayRational();
    cout<<"Num2 is : ";
	num2.displayRational();
	
	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	qoutient = num1 / num2;
	
	cout<<"Sum of num1 and num2 is : ";
	sum.displayRational();
	cout<<"Product of num1 and num2 is : ";
	product.displayRational();
	cout<<"Difference of num1 and num2 is : ";
	difference.displayRational();
	cout<<"Qoutient of num1 and num2 is ";
	qoutient.displayRational();
	
	if(num1 == num2)
	{
		cout<<"Num1 = Num2"<<endl;
	}
	if(num1 > num2)
	{
		cout<<"Num1 > Num2"<<endl;
	}
	if(num1 < num2)
	{
		cout<<"Num < Num2"<<endl;
	}
	if(num1 <= num2)
	{
		cout<<"Num1 <= Num2"<<endl;
	}
	if(num1 >= num2)
	{
		cout<<"Num1 >= Num2"<<endl;
	}
	if(num1 != num2)
	{
		cout<<"Num1 != Num2"<<endl;
	}
	return 0;
	
}
