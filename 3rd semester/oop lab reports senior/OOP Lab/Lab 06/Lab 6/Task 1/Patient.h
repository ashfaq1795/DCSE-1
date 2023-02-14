#include<iostream>
#include <string>
#include"Person.h"

#ifndef PATIENT_H
#define PATIENT_H
using namespace std;

class patient : public person
{
	protected:
		string date;
	public:
		patient();
		patient (unsigned int i , string n , string c , unsigned int con , string d);
		patient (person a , string d);
		void setAdmit_Date (string d);
		string getAdmit_Date ();
		
		void display();
};

#endif
