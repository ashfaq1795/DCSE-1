#include<iostream>
using namespace std;

class Heater
{
	private:
		int temperature;
		int max,min,increment;
	public:
		Heater()
		{
			max=100; // Suppos
			min=0;  // Suppos
			increment=0;
			temperature=15;
		}
		void warmer(int inc)
		{
			if((inc+temperature)<=max)
			{
				temperature+=inc;
			}
			else
			{
			   cout<<"Out of Range: "<<endl;	
			}			
	    }
		void cooler(int dec)
		{
			if((temperature-dec)<=0)
			{
			    temperature-=dec;
			}
			else
			{
			   cout<<"Out of Range: "<<endl;	
			}
			
		}
		int gettemp()
		{
			return temperature;
		}
};

int main()
{
	Heater obj;
	int inc,dec;
	cout<<"Origional: ";
	cout<<obj.gettemp()<<endl;
	cout<<"Enter Increment Temp: ";
	cin>>inc;
	
	obj.warmer(inc);
	cout<<"Warmer: "<<obj.gettemp()<<endl;
	cout<<endl;
	cout<<"Enter Decrement Temp: ";
	cin>>dec;
	obj.cooler(dec);
	cout<<"Cooler: "<<obj.gettemp();
	return 0;
}

