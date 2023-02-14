#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	private :
		char *name,*dept;
		double salary,service;
	public :
		employee();
		employee(char *n,char *d,double s,double se);	
		employee(const employee &e1);
		void input(char *na,char *de,double sa,double ser);	
	    void show();
	    ~employee();
};
employee::employee():salary(0),service(0)
{
	name = new char[20];
	strcpy(name,"");
	dept = new char[20];
	strcpy(dept,"");
}
employee::employee(char *n,char *d,double s,double se):salary(s),service(se)
{
	name = new char[strlen(n)+1];
	strcpy(name,n);
	dept = new char[strlen(d)+1];
	strcpy(dept,d);
}
employee::employee(const employee &e1)
{
	name = new char;
	strcpy(name,e1.name);
	dept = new char;
	strcpy(dept,e1.dept);
	salary = e1.salary;
	service = e1.service;
}
void employee::input(char *na,char *de,double sa,double ser)
{
	strcpy(name,na);
	strcpy(dept,de);
	salary = sa;
	service = ser;	
}
void employee::show()
{
	cout<<"The Name of employee is : "<<name<<endl;
	cout<<"The Department of employee is : "<<dept<<endl;
	cout<<"The salary of employee is : "<<salary<<endl;
	cout<<"The service of employee in years is : "<<service<<endl;
}
employee::~employee()
{
	delete[] name;
	delete[] dept;
	cout<<"Destructor: "<<endl;
}
int main()
{
	char nam[]="Jamhid";
	char dep[]="dcse";
	
	char nam2[]="bacha";
	char dep2[]="civil";
	employee e1(nam,dep,50000,6),e2;
	e1.show();
	
	e2.input(nam2,dep2,50000,5);
	e2.show();
	return 0;
}

