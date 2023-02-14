#include <iostream>
#include "patient.h"

using namespace std;

class ResPatient : protected patient
{
	private:
		string Checkback_Date;
		string Discharge_Date;
	public:
		ResPatient() : patient () , Checkback_Date ("00/00/00") , Discharge_Date ("00/00/00") {}
		ResPatient (patient a , string b , string c)
		{
			Checkback_Date=b;
			Discharge_Date=c;
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
		void setDDate (string a)
		{
			Discharge_Date=a;
		}
		string getDDate()
		{
			return Discharge_Date;
		}
		void display()
		{
			patient::display();
			cout<<"The Check back date is "<<Checkback_Date<<endl;
			cout<<"The Discharge date is "<<Discharge_Date<<endl;
		}
		
};
