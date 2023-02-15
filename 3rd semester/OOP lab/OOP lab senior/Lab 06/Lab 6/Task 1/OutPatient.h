#include <iostream>
#include "patient.h"

using namespace std;

class OutPatient : protected patient
{
	private:
		string Checkback_Date;
	public:
		OutPatient() : patient () , Checkback_Date ("00/00/00") {}
		OutPatient (patient a , string b)
		{
			Checkback_Date=b;
			date=a.getAdmit_Date();
			id= a. getID();
			name=a.getName();
			city = a.getCity();
			contact= a.getContact();
		}
		void setCDate (string a)
		{
			Checkback_Date=a;
		}
		string getCDate()
		{
			return Checkback_Date;
		}
		void display()
		{
			patient::display();
			cout<<"The Check back date is "<<Checkback_Date<<endl;
		}
		
};
