#include<iostream>
using namespace std;

class Heater
{
	private:
		int temperature;
	public:
		Heater()
		{
			temperature=15;
		}
		void origional()
		{
			cout<<temperature<<endl;
		}
		void warmer()
		{
			temperature+=5;
		}
		void cooler()
		{
			temperature-=5;
		}
		int gettemp()
		{
			return temperature;
		}
};

int main()
{
	Heater obj;
	cout<<"Origional: ";
	obj.origional();
	obj.warmer();
	cout<<"Warmer: "<<obj.gettemp()<<endl;
	cout<<endl;
	obj.cooler();
	cout<<"Cooler: "<<obj.gettemp();
	return 0;
}

