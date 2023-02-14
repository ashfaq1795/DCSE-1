#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet,inches;
	public:
		Distance();
		Distance(int f,int i);
		void show();
		Distance operator+(Distance d1);
		Distance operator+=(Distance d1);
		
		bool operator>(Distance d1);
		bool operator>=(Distance d1);
		bool operator<(Distance d1);
		bool operator<=(Distance d1);
		bool operator==(Distance d1);
		bool operator!=(Distance d1);
		
};

Distance::Distance()
{
	feet=0;
	inches=0;
}


Distance::Distance(int f,int i)
{
	if(i>=12)
	{
		f++;
		i-=12;
	}
	feet=f;
	inches=i;
}

void Distance::show()
{
	cout<<feet<<"' "<<inches<<"\" "<<endl;
}

Distance Distance::operator+(Distance d1)
{
	Distance sum;
	sum.feet=d1.feet+feet;
	sum.inches=d1.inches+inches;
	if(sum.inches>=12)
	{
	 	sum.feet++;
	 	sum.inches-=12;
	}
	return sum;
}

Distance Distance::operator+=(Distance d1)
{

	feet=d1.feet+feet;
	inches=d1.inches+inches;
	if(inches>=12)
	{
	 	feet++;
	 	inches-=12;
	}
}
bool Distance::operator>(Distance d1)
{
	if(feet>d1.feet)
	return true;
	else if(feet==d1.feet && inches>d1.inches)
	return true;
	else
	return false;
}
bool Distance::operator<(Distance d1)
{
	if(feet<d1.feet)
	return true;
	else if(feet==d1.feet && inches<d1.inches)
	return true;
	else
	return false;
}

bool Distance::operator>=(Distance d1)
{
	if(feet>d1.feet)
	return true;
	else if(feet==d1.feet && inches>=d1.inches)
	return true;
	else
	return false;
}
bool Distance::operator<=(Distance d1)
{
	if(feet<d1.feet)
	return true;
	else if(feet==d1.feet && inches<=d1.inches)
	return true;
	else
	return false;
}
bool Distance::operator==(Distance d1)
{
    if(feet==d1.feet && inches==d1.inches)
	return true;
	else
	return false;
}
bool Distance::operator!=(Distance d1)
{
    if(feet!=d1.feet && inches!=d1.inches)
	return true;
	else
	return false;
}
int main()
{
	Distance d1(1,7),d2(2,8);
	cout<<"Distance One: "<<endl;
	d1.show();
	cout<<"Distance Two: "<<endl;
	d2.show();
	
	Distance sum;
	sum=d1+d2;
	cout<<"Sum of D1 and D2 is: "<<endl;
	sum.show();
	
	sum+=d2;
	cout<<"Sum of D1 and D2 is: "<<endl;
	sum.show();
	
	if(d1>d2)
	{
		cout<<"D1 > D2: "<<endl;
	}
	if(d1<d2)
	{
		cout<<"D1 < D2: "<<endl;
	}
	if(d1>=d2)
	{
		cout<<"D1 >= D2: "<<endl;
	}
	if(d1<=d2)
	{
		cout<<"D1 <= D2: "<<endl;
	}
	if(d1==d2)
	{
		cout<<"D1 == D2: "<<endl;
	}
	if(d1!=d2)
	{
		cout<<"D1 != D2: "<<endl;
	}
	
	return 0;
}

