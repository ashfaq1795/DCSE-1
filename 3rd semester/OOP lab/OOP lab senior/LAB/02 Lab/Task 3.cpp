#include<iostream>
using namespace std;

class heater
{
	private:
		int temperature,increament,maxiTemp,miniTemp;
	public:
		heater()
		{
		    temperature=15;
		    increament=5;
		    maxiTemp=100;
		    miniTemp=0;	
		}
	    
	void setIncreament(int newIncreament)
	{
		if(newIncreament<0)
		{
			cout<<"You are Assigning Negative value: "<<endl;
		}
		else
		{
			increament=newIncreament;
		}
	}
	void setWarmer()
	{
		if((temperature+increament) <=maxiTemp)
		{
			temperature+=increament;
		}
	}
	void setCooler()
	{
		if((temperature-increament)>=miniTemp)
		{
			temperature-=increament;
		}
	}	
	int getTemperature()
	{
		return temperature;
	}
};


int main()
{
	heater obj;
	int incment;
	cout<<"Enter the Increament Value: ";
	cin>>incment;
	cout<<"The Default Value of Temperature is: "<<obj.getTemperature()<<endl;
	obj.setIncreament(incment);
	obj.setWarmer();
	cout<<"After Increamentation: "<<obj.getTemperature()<<endl;
	obj.setCooler();
	cout<<"After Decreamentation: "<<obj.getTemperature()<<endl;
}
