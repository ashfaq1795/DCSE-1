#include<iostream>
using namespace std;
class toolBooth
{
	private:
		float toolTax;
		unsigned int cars;
		double totalToolTax;
	public:
		toolBooth()
		{
			cars=0;
			totalToolTax=0;
		}
		void payingCars()
		{
			cars+=1;
			totalToolTax+=0.50;
		}
		void nonPayingCar()
		{
			cars+=1;
		}
		void display()
		{
			cout<<"Totle Number of Carse: "<<cars<<endl;
			cout<<"Totle Taxe Collected: "<<totalToolTax<<endl;
		}
			
};
int main()
{
	toolBooth booth;
	char check;
	cout<<"Enter P for paying and N for non paying cars and ESC to exit: ";
	while(true)
	{
		cin>>check;
		if(check=='P' || check=='p' )
		{
			booth.payingCars();
		}
		else if(check=='N' || check=='n')
		{
			booth.nonPayingCar();
		}
		else if(check=='C' || check=='c')
		{
			break;
		}
	}
	booth.display();
}
