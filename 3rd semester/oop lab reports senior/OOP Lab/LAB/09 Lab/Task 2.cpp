#include<iostream>
using namespace std;

class shape
{
	protected:
		const float pi=3.14;
		float area,volum;
	public:
		virtual void areaF()
		{
			
		}
		virtual void volumeF()
		{
			
		}
		virtual void display()=0;
		
};

class TwoDimensional:public shape
{
	virtual void areaF()
	{
		
	}
	virtual void volumeF()
	{
		
	}
	virtual void display()
	{
		cout<<"2-Dimension: "<<endl;
	}
};
class ThreeDimensional:public shape
{
	virtual void areaF()
	{
		
	}
	virtual void volumeF()
	{
		
	}
	virtual void display()
	{
		cout<<"3-Dimension: "<<endl;
	}
};

int main()
{
	shape	*sh;
	ThreeDimensional d3;
	TwoDimensional d2;
	sh = &d3; 
	sh->display();
	sh = &d2; 
	sh->display();
	return 0;
}
