#include<iostream>
using namespace std;

class distance_test
{
	private:
		float feet,inches;
	public:
		distance_test();
		distance_test(float f,float i);
		void addDistance(distance_test d1,distance_test d2);
		bool isGreater(distance_test d1,distance_test d2);
		bool isSmaller(distance_test d1,distance_test d2);
		bool isGreaterEqual(distance_test d1,distance_test d2);
		bool isSmallerEqual(distance_test d1,distance_test d2);
		bool isEqual(distance_test d1,distance_test d2);
		void displaydistance_test();
		
};

distance_test::distance_test()
    {
	    feet=0;
	    inches=0;
    }
    
distance_test:: distance_test(float f,float i)
    {
	    if(f>=12)
	    {
	    	f=f+1;
	    	i=i-12;
		}
		feet=f;
		inches=i;
    }
    
void distance_test::addDistance(distance_test d1,distance_test d2)
    {
     	feet=d1.feet + d2.feet;
     	inches=d1.inches + d2.inches;
     	if(inches>=12)
     	{
		   feet=feet+1;
		   inches=inches-12;
		}
	}
	
bool distance_test::isGreater(distance_test d1,distance_test d2)
    {
    	if(d1.feet>d2.feet)
    	{
    		return true;
		}
		else if(d1.feet==d2.feet && d1.inches > d2.inches)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
bool distance_test::isSmaller(distance_test d1,distance_test d2)
    {
    	if(d1.feet < d2.feet)
    	{
    		return true;
		}
		else if(d1.feet == d2.feet && d1.inches < d2.inches)
		{
			return true;
		}
		else 
		{
			false;
		}
	}
bool distance_test::isGreaterEqual(distance_test d1,distance_test d2)
    {
    	if(d1.feet>=d2.feet)
    	{
    		return true;
		}
		else if(d1.feet == d2.feet && d1.inches>=d2.inches)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
bool distance_test::isSmallerEqual(distance_test d1,distance_test d2)
    {
    	if(d1.feet<=d2.feet)
    	{
    		return true;
		}
		else if(d1.feet==d2.feet && d1.inches<=d2.inches)
		{
			return true;
		}
		else
		{
			false;
		}
	}
bool distance_test::isEqual(distance_test d1,distance_test d2)
    {
    	if(d1.feet==d2.feet && d1.inches==d2.inches)
    	{
    		return true;
		}
		else if(d1.feet == d2.feet && d1.inches >d2.inches)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
void distance_test::displaydistance_test()
    {
    	cout<<feet<<" Feet "<<inches<<" Inches "<<endl;
	}
int main()
{
	distance_test d1,d2(34,22),d3(45,15);
	cout<<"Distance Test 1 Is: ";
	d2.displaydistance_test();
	cout<<"Distance Test 2 Is: ";
	d3.displaydistance_test();
	d1.addDistance(d2,d3);
	cout<<"Sum of Distance 1 and Distance 2 IS: ";
	d1.displaydistance_test();
	if(d1.isGreater(d2,d3))
	{
		cout<<"Distance 1 > Distance 2"<<endl;
	}
	if(d1.isSmaller(d2,d3))
	{
		cout<<"Distance 1 < Distance 2"<<endl;
	}
	if(d1.isGreaterEqual(d2,d3))
	{
		cout<<"Distance 1 >= Distance 2"<<endl;
	}
	if(d1.isSmallerEqual(d2,d3))
	{
		cout<<"Distance 1 <= Distance 2"<<endl;
	}
	if(d1.isEqual(d2,d3))
	{
		cout<<"Distance 1 = Distance 2"<<endl;
	}
	return 0;
}
