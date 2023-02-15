#include<iostream>
using namespace std;

class rationalNumbers
{
	private:
		int nominator;
		int denominator;
	public:
		// A
		rationalNumbers ();
		rationalNumbers (int nom, int denom);
		void display();
		// B
		void addFraction(rationalNumbers num1,rationalNumbers num2);
		// C
		void subtractFraction(rationalNumbers num1,rationalNumbers num2);
		// D
		void multiplyFraction(rationalNumbers num1,rationalNumbers num2);
		// E
		void divideFraction(rationalNumbers num1,rationalNumbers num2);
		// F
		bool isGreater(rationalNumbers num1,rationalNumbers num2);
		bool isSmaller(rationalNumbers num1,rationalNumbers num2);
		bool isGreaterEqual(rationalNumbers num1,rationalNumbers num2);
		bool isSmallerEqual(rationalNumbers num1,rationalNumbers num2);
		
		bool isEqual(rationalNumbers num1,rationalNumbers num2);
		bool isNotEqual(rationalNumbers num1,rationalNumbers num2);
};

// A
rationalNumbers :: rationalNumbers()
{
	nominator = 1;
	denominator = 1;
}
rationalNumbers :: rationalNumbers(int nom, int denom)
	{
		nominator = nom;
		if(denom > 0 )
		{
			denominator = denom;
		}
	}
	
// B
void rationalNumbers :: addFraction(rationalNumbers num1, rationalNumbers num2)
{
	nominator = (num1.nominator * num2.denominator) + (num2.nominator * num1.denominator);
	denominator = num1.denominator * num2.denominator;
}
// C
void rationalNumbers :: subtractFraction(rationalNumbers num1, rationalNumbers num2)
{
	nominator = (num1.nominator * num2.denominator) - (num2.nominator * num1.denominator);
	denominator = num1.denominator * num2.denominator;
}
// D
void rationalNumbers :: multiplyFraction(rationalNumbers num1, rationalNumbers num2)
{
	nominator = (num1.nominator * num2.nominator);
	denominator = num1.denominator * num2.denominator;
}
// E
void rationalNumbers :: divideFraction(rationalNumbers num1, rationalNumbers num2)
{
	nominator = (num1.nominator * num2.denominator);
	denominator = num1.denominator * num2.nominator;
}

// F
bool rationalNumbers :: isGreater(rationalNumbers num1, rationalNumbers num2)
{
	if(((float) num1.nominator/(float) num1.denominator) > ((float) num2.nominator/(float) num2.denominator))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool rationalNumbers :: isSmaller(rationalNumbers num1, rationalNumbers num2)
{
	if(((float) num1.nominator/(float) num1.denominator) < ((float) num2.nominator/(float) num2.denominator))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool rationalNumbers :: isGreaterEqual(rationalNumbers num1, rationalNumbers num2)
{
	if(((float) num1.nominator/(float) num1.denominator) >= ((float) num2.nominator/(float) num2.denominator))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool rationalNumbers :: isSmallerEqual(rationalNumbers num1, rationalNumbers num2)
{
	if(((float) num1.nominator/(float) num1.denominator) <= ((float) num2.nominator/(float) num2.denominator))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
//Activity_1(F)
bool rationalNumbers :: isEqual(rationalNumbers num1, rationalNumbers num2)
{
	if(((float) num1.nominator/(float) num1.denominator) == ((float) num2.nominator/(float) num2.denominator))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool rationalNumbers :: isNotEqual(rationalNumbers num1, rationalNumbers num2)
{
	if(((float) num1.nominator/(float) num1.denominator) != ((float) num2.nominator/(float) num2.denominator))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
 void rationalNumbers :: display()
	{
		cout<<nominator<<"/"<<denominator<<endl;
	}
	

int main()
{
	rationalNumbers num1(10,3), num2(5,4), num3;
	cout<<"Num1 is :";
	num1.display();
	cout<<"Num2 is :";
	num2.display();
	num3.addFraction(num1, num2);
	cout<<"Sum of Num1 and Num2 is :";
	num3.display();
	num3.subtractFraction(num1, num2);
	cout<<"Difference of Num1 and Num2 is :";
	num3.display();
	num3.multiplyFraction(num1, num2);
	cout<<"Product of Num1 and Num2 is :";
	num3.display();
	num3.divideFraction(num1, num2);
	cout<<"Qoutient of Num1 and Num2 is :";
	num3.display();
if(num3.isGreater(num1, num2))
	{
		cout<<"Num1 > num2"<<endl;
	}
if(num3.isSmaller(num1, num2))
	{
		cout<<"Num1 < num2"<<endl;
	}
	
if(num3.isGreaterEqual(num1, num2))
	{
		cout<<"Num1 >= num2"<<endl;
	}
if(num3.isSmallerEqual(num1, num2))
	{
		cout<<"Num1 <= num2"<<endl;
	}
if(num3.isEqual(num1, num2))
	{
		cout<<"Num1 = num2"<<endl;
	}
if(num3.isNotEqual(num1, num2))
	{
		cout<<"Num1 != num2"<<endl;
	}
	return 0;
}

