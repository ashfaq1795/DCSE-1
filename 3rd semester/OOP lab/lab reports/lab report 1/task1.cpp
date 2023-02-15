#include <iostream>
using namespace std;
class heater 
{
	private:
		int temp;
	public:
		heater() //constructor for initialization.
		{
			temp=15;
		}
	void warmer()
	{
		temp+=5;
	}
	void cooler()
	{
		temp-=5;
	}                          //we can also use like these given lines instead of given corresponding lines...
	int accessor()                    //void display()
	{
	return temp;            // cout<<"the temp is: "<<temp<<endl;
	}
};
int main()
{
	heater heat;            
	heat.warmer();
    cout<<heat.accessor()<<endl;          //heat.display();
	heat.cooler();                
	cout<<heat.accessor();                //heat.display();
    return 0;
};
