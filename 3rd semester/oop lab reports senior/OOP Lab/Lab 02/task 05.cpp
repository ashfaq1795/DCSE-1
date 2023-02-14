#include<iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
class tollbooth
{
	private:
		float tooltax;
		unsigned int cars;
		double totalToolTax;
	public:
		tollbooth()
		{
			totalToolTax=0;
			cars=0;
			tooltax=0.50;
		}
		void payingCars()
		{
			cars+=1;
			totalToolTax+=tooltax;
		}
		void nonPayingCar()
		{
			cars+=1;
		}
		void desplay()
		{
			cout<<"Totel Carse: "<<cars<<endl;
			cout<<"Totle Taxe Collected: "<<totalToolTax<<endl;
		}
		
};

int main()
{
	tollbooth obj;
	char check;
	cout<<"Enter p for paying and n for non paying cars and c for Cancel to exit: ";
	while(true)
	{
		cin>>check;
		if(check=='p' )
		{
			obj.payingCars();
		}
		else if(check=='n')
		{
			obj.nonPayingCar();
		}
		else if(check=='c')
		{
			break;
		}
	}
	obj.desplay();
}
