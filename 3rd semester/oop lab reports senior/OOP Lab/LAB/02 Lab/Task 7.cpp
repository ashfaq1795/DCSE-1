#include<iostream>
using namespace std;

class employee
{
	private:
		string Fname;
		string Lname;
		double monthlySalary;
		double yearSalary;
	public:
		employee()
		{
			Fname=" ";
			Lname=" ";
			monthlySalary=0;
		}
		void setData()
		{
			cout<<"Enter First Name: ";
			cin>>Fname;
			cout<<"Enter Last Name: ";
			cin>>Lname;
			cout<<"Enter The Salary: ";
			cin>>monthlySalary;
			if(monthlySalary<0)
			{
				monthlySalary=0.0;
			}
		}
		void getData()
		{
			cout<<"First Name: "<<Fname<<endl;
			cout<<"Last Name: "<<Lname<<endl;
			cout<<"Monthlay Salary: "<<monthlySalary<<endl;
		}
		void increaseSalary()
		{
			monthlySalary+=monthlySalary/10;
		}
		void displayYearSalary()
		{
			cout<<"Yearly Salary: "<<monthlySalary*12<<endl;
		}
};

int main()
{
	employee emp1,emp2;
	cout<<"For Employee No.1 "<<endl;
	emp1.setData();
	cout<<"For Employee No.2 "<<endl;
	emp2.setData();
	cout<<"\n\nEmployee No.1 Details: "<<endl;
	emp1.getData();
	emp1.displayYearSalary();
	cout<<"\n\nEmployee No.2 Details: "<<endl;
	emp2.getData();
	emp2.displayYearSalary();
	cout<<"\n\nAfter One Year: "<<endl;
	cout<<"Employee No.1: "<<endl;
	emp1.displayYearSalary();
	cout<<"Employee No.2: "<<endl;
	emp2.displayYearSalary();
	return 0;
}
