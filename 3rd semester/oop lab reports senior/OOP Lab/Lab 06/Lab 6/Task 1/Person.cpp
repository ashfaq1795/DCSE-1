#include <iostream>
#include "Person.h"

using namespace std;

person::person() : id (0) , name("") , city ("") , contact(0) {}
person::person(unsigned int i , string n , string c , unsigned int con) : id (i) , name(n) , city(c) , contact(con) {}
void person::setID(unsigned int i)
{
	id =i ;
}

void person::setName(string n)
{
	name=n;
}

void person::setCity(string c)
{
	city = c;
}

void person::setContact(unsigned int con)
{
	contact=con;
}

unsigned int person::getID()
{
	return id;
}

string person::getName()
{
	return name;
}

string person::getCity()
{
	return city;
}

unsigned int person::getContact()
{
	return contact;
}

void person::display()
{
	cout<<"ID : "<<id <<endl;
	cout<<"Name : "<<name <<endl;
	cout<<"City : "<<city <<endl;
	cout<<"Contact : "<<contact<<endl;
}

