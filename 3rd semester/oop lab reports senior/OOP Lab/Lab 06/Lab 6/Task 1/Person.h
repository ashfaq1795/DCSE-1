#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string.h>


class person
{
	protected:
		unsigned int id;
		string name;
		string city ;
		unsigned int contact;
		
	public:
		person();
		person(unsigned int i , string n, string c , unsigned int con);
		void setID(unsigned int i);
		void setName(string n);
		void setCity(string c);
		void setContact(unsigned int con);
		
		unsigned int getID();
		string getName();
		string getCity ();
		unsigned int getContact();
	
		void display();
};

#endif
