#include<iostream>
using namespace std;

class rationalNumbers
{
	private:
		int a,b;
	public:
		rationalNumbers();
		rationalNumbers(int x,int y);
		void display();
		friend rationalNumbers operator+(rationalNumbers num1,rationalNumbers num2);
		friend rationalNumbers operator-(rationalNumbers num1,rationalNumbers num2);
		friend rationalNumbers operator*(rationalNumbers num1,rationalNumbers num2);
		friend rationalNumbers operator/(rationalNumbers num1,rationalNumbers num2);
		friend bool operator>(rationalNumbers num1,rationalNumbers num2);
		friend bool operator<(rationalNumbers num1,rationalNumbers num2);
		friend bool operator>=(rationalNumbers num1,rationalNumbers num2);
		friend bool operator<=(rationalNumbers num1,rationalNumbers num2);
		friend bool operator==(rationalNumbers num1,rationalNumbers num2);
		friend bool operator!=(rationalNumbers num1,rationalNumbers num2);
};

rationalNumbers::rationalNumbers()
{
	a=1;
	b=1;
}
rationalNumbers::rationalNumbers(int x,int y)
{
	a=x;
	b=y;
}



void rationalNumbers::display()
{
	cout<<a<<"/"<<b<<endl;
}

rationalNumbers operator+(rationalNumbers num1,rationalNumbers num2)
{
	rationalNumbers sum;
	sum.a=(num1.a*num2.b) + (num1.a*num2.b);
	sum.b=(num1.b*num2.b);

	return sum;
}

rationalNumbers operator-(rationalNumbers num1,rationalNumbers num2)
{
	rationalNumbers diff;
	diff.a=(num1.a*num2.b) - (num1.a*num2.b);
	diff.b=(num2.b*num1.b);

	return diff;
}

rationalNumbers operator*(rationalNumbers num1,rationalNumbers num2)
{
	rationalNumbers product;
	product.a = num1.a*num2.a;
	product.b = num2.b*num1.b;

	return product;
}
rationalNumbers operator/(rationalNumbers num1,rationalNumbers num2)
{
	rationalNumbers division;
	division.a= num1.a*num2.b;
	division.b=num1.a*num2.b;

	return division;
}

bool operator>(rationalNumbers num1,rationalNumbers num2)

{
	if(((float) num1.a/(float) num2.b)>((float)num1.a/(float) num2.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<(rationalNumbers num1,rationalNumbers num2)
{
	if(((float) num2.a/(float) num2.b)<((float)num1.a/(float) num2.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator>=(rationalNumbers num1,rationalNumbers num2)
{
	if(((float) num2.a/(float) num2.b)>=((float)num1.a/(float) num1.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator<=(rationalNumbers num1,rationalNumbers num2)
{
	if(((float) num2.a/(float) num2.b)<=((float)num1.a/(float) num1.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator==(rationalNumbers num1,rationalNumbers num2)
{
	if(((float) num2.a/(float) num2.b)==((float)num1.a/(float) num1.b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator!=(rationalNumbers num1,rationalNumbers num2)
{
	if(((float) num2.a/(float) num2.b)!=((float)num1.a/(float) num1.b))
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

