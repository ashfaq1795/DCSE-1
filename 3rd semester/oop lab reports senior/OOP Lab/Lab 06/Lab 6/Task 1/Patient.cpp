#include <iostream>
#include "Patient.h"

using namespace std;

patient::patient():person() , date("00/00/00") {}
patient::patient(unsigned int i , string n , string c ,unsigned int con, string d) : person (i , n , c , con) , date (d) {}

patient::patient (person a, string d)
{
	date=d;
	id= a.getID();
	name=a.getName();
	city = a.getCity();
	contact= a.getContact();
}

void patient :: setAdmit_Date(string a)
{
	date=a;
}

string patient::getAdmit_Date()
{
	return date;
}

void patient :: display()
{
	person::display();
	cout<<"Admit date: "<<date<<endl;
}


