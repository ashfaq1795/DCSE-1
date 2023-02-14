#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet,inches;
	public:
		Distance()
		{
			feet=0;
			inches=0;
		}
		Distance(int f,int i)
		{
			feet=f;
			inches=i;
		}
		void display()
		{
			cout<<"\nFeet: "<<feet<<"   Inches: "<<inches<<endl;
		}
		Distance operator+(Distance d);
		Distance operator+=(Distance d);
		bool operator>(Distance d);
		bool operator<(Distance d);
		bool operator>=(Distance d);
		bool operator<=(Distance d);
		bool operator==(Distance d);
		bool operator!=(Distance d);
};
Distance Distance::operator+(Distance d)
{
	Distance res;
	res.feet=d.feet+feet;
	res.inches=d.inches+inches;
	if(inches>=12)
	{
		res.inches-=12;
		res.feet++;
	}
	return res;
};
Distance Distance::operator+=(Distance d)
{
	this->feet=d.feet+this->feet;
	this->inches=d.inches+this->inches;
	if(this->inches>=12)
	{
		this->feet++;
		this->inches-=12;
	}
	return Distance(this->feet,this->inches);
};
bool Distance::operator>(Distance d)
{
	if(feet<d.feet)
	{
		return true;
	}
	else if(this->feet==d.feet && this->inches>d.inches)
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
	Distance d1(1,3),d2(5,4),sum,inc;
	cout<<"D1: ";
	d1.display();
	cout<<endl<<"D2: ";
	d2.display();
	sum=d1+d2;
	cout<<endl<<"D1+D2: ";
	sum.display();
	d1+=d2;
	cout<<"D1+=D2: ";
	d1.display();
	if(d1>d2)
	{
		cout<<"D1 > D2: ";
	}
	else
	{
		cout<<"D1 < D2: ";
	}
	return 0;
}
