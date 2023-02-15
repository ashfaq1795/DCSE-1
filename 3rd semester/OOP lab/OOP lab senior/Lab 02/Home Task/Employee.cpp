#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
		string F_name,L_name;
		double salary;
	public:
		Employee()
		{
			F_name="";
			L_name="";
			salary=0.0;
		}
		void set_Data()
		{
			cout<<"Enter Farst Name: "<<endl;
			cin>>F_name;
			cout<<"Enter Last Name: "<<endl;
			cin>>L_name;
			cout<<"Enter Salary: "<<endl;
			cin>>salary;
			if(salary<0)
			{
				salary=0.0;
			}
		}
		void get_Data()
		{
			cout<<endl<<"Name of Employe: "<<F_name<<" "<<L_name<<endl;
			cout<<"Monthly Salary: "<<salary<<endl;
		}
		void raise_Salary()
		{
			salary+=salary/10;
		}
		void Year_Salary()
		{
			cout<<"Yearly Salary Is: "<<salary*12<<endl;
		}
		
};

int main()
{
	Employee employee1,employee2;
	
	cout<<"Enter First Employee Information: "<<endl;
	employee1.set_Data();
	
	
	cout<<endl<<"Enter Second Employee Information: "<<endl;
	employee2.set_Data();
	
	cout<<endl<<"First Employee Information: "<<endl;
	employee1.get_Data();
	employee1.Year_Salary();
	cout<<endl<<"Second Employee Information: "<<endl;
	employee2.get_Data();
	employee2.Year_Salary();
	cout<<"After One Year: "<<endl;
	cout<<endl<<"First Employee: ";
	employee1.Year_Salary();
	cout<<endl<<"Second Employee: ";
	employee2.Year_Salary();
	return 0;
}
