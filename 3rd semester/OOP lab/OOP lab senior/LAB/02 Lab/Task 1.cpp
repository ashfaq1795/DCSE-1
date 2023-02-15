#include<iostream>
using namespace std;

class Heater
{
	private:
		int Temperature;
	public:
		Heater()
		{
			Temperature=15;
		}
		void setWarmer() 
		{
			Temperature+=5;
		}
		void setCooler()
		{
			Temperature-=5;
		}
		int getTemperature()
		{
			return Temperature;
		}
			
	
};
int main()
{
	Heater obj;
	obj.setWarmer();
	cout<<"Warmer: "<<obj.getTemperature()<<endl;
	obj.setCooler();
	cout<<"Cooler: "<<obj.getTemperature()<<endl;
	
}
