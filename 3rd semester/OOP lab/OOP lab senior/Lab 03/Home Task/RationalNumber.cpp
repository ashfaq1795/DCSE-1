#include<iostream>
using namespace std;

class RationalNumber
{
	private:
		int numerator,denominator;
	public:
		RationalNumber();
		RationalNumber(int nom,int denom);
		RationalNumber AddFraction(RationalNumber num1,RationalNumber num2);
		void SubtractFraction(RationalNumber num1,RationalNumber num2);
		void MultiplyFraction(RationalNumber num1,RationalNumber num2);
		void Division(RationalNumber num1,RationalNumber num2);
		void display();
		
		bool isGreater(RationalNumber num1,RationalNumber num2);
		bool isSmaller(RationalNumber num1,RationalNumber num2);
		bool isGreaterEqual(RationalNumber num1,RationalNumber num2);
		bool isSmallerEqual(RationalNumber num1,RationalNumber num2);
		bool isEqual(RationalNumber num1,RationalNumber num2);
		bool isNotEqual(RationalNumber num1,RationalNumber num2);
};

RationalNumber::RationalNumber()
{
	numerator=1;
	denominator=1;
}

RationalNumber::RationalNumber(int nom,int denom)
{
	numerator=nom;
	if(denom>0)
	denominator=denom;
	else
	denominator=1;
}

RationalNumber RationalNumber::AddFraction(RationalNumber num1,RationalNumber num2)
{
	RationalNumber ans;
	ans.numerator=num1.numerator*num2.denominator + num2.numerator*num1.denominator;
	ans.denominator=num1.denominator*num2.denominator;
	return ans;
}

void RationalNumber::SubtractFraction(RationalNumber num1,RationalNumber num2)
{
	numerator=num1.numerator*num2.denominator - num1.denominator*num2.numerator;
	denominator=num1.denominator*num2.denominator;
}

void RationalNumber::MultiplyFraction(RationalNumber num1,RationalNumber num2)
{
	numerator=num1.numerator*num2.numerator;
	denominator=num1.denominator*num2.denominator;
}

void RationalNumber::Division(RationalNumber num1,RationalNumber num2)
{
	numerator=num1.numerator*num2.denominator;
	denominator=num1.denominator*num2.numerator;
}

void RationalNumber::display()
{
	cout<<numerator<<" / "<<denominator<<endl;
}

bool RationalNumber::isGreater(RationalNumber num1,RationalNumber num2)
{
	if(((float)num1.numerator/(float)num1.denominator)>((float)num2.numerator/(float)num2.denominator))
	return true;
	else
	return false;
}

bool RationalNumber::isSmaller(RationalNumber num1,RationalNumber num2)
{
	if(((float)num1.numerator/(float)num1.denominator)<((float)num2.numerator/(float)num2.denominator))
	return true;
	else
	return false;
}

bool RationalNumber::isGreaterEqual(RationalNumber num1,RationalNumber num2)
{
	if(((float)num1.numerator/(float)num1.denominator)>=((float)num2.numerator/(float)num2.denominator))
	return true;
	else
	return false;
}

bool RationalNumber::isSmallerEqual(RationalNumber num1,RationalNumber num2)
{
	if(((float)num1.numerator/(float)num1.denominator)<=((float)num2.numerator/(float)num2.denominator))
	return true;
	else
	return false;
}

bool RationalNumber::isEqual(RationalNumber num1,RationalNumber num2)
{
	if(((float)num1.numerator/(float)num1.denominator)==((float)num2.numerator/(float)num2.denominator))
	return true;
	else
	return false;
}

bool RationalNumber::isNotEqual(RationalNumber num1,RationalNumber num2)
{
	if(((float)num1.numerator/(float)num1.denominator)!=((float)num2.numerator/(float)num2.denominator))
	return true;
	else
	return false;
}


int main()
{
	RationalNumber num1(1,3),num2(5,4),num3;
	cout<<"First Number Is: "<<endl;
	num1.display();
	
	cout<<"Second Number Is: "<<endl;
	num2.display();
	
	num3.AddFraction(num1,num2);
	cout<<"Addition of Num1 and Num2 is: "<<endl;
	num3.display();
	
	num3.SubtractFraction(num1,num2);
	cout<<"Subtracion of Num1 and Num2 is: "<<endl;
	num3.display();
	
	num3.MultiplyFraction(num1,num2);
	cout<<"Multiplication of Num1 and Num2 is: "<<endl;
	num3.display();
	
	num3.Division(num1,num2);
	cout<<"Division of Num1 and Num2 is: "<<endl;
	num3.display();
	
	if(num3.isGreater(num1,num2))
	{
		cout<<"Num1 Is Greater then Num2: "<<endl;
	}
	
	if(num3.isSmaller(num1,num2))
	{
		cout<<"Num1 Is Smaller then Num2: "<<endl;
	}
	if(num3.isGreaterEqual(num1,num2))
	{
		cout<<"Num1 Is Greater and Equal then Num2: "<<endl;
	}
	if(num3.isSmallerEqual(num1,num2))
	{
		cout<<"Num1 Is Smaller Equal then Num2: "<<endl;
	}
	if(num3.isEqual(num1,num2))
	{
		cout<<"Num1 is Equal to Num2: "<<endl;
	}
	if(num3.isNotEqual(num1,num2))
	{
		cout<<"Num1 Is Not Equal Num2: "<<endl;
	}
	return 0;
	
}

