#include <iostream>
#include <string.h>
using namespace std;
class student
{
	private:
		char *name;
		int roll;
		int semester;
	public:
	student(char *n, int r, int s): roll(r), semester(s)
	{
		name=new char;
		strcpy(name, n);
	}
	student(const student &s1)
	{
		name = new char;
		strcpy(name,s1.name);
		roll = s1.roll;
		semester = s1.semester;
	}

	void show()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll NO: "<<roll<<endl;
		cout<<"Semester: "<<semester<<endl;
	}
	~student()
	{
		delete[] name;
		cout<<"Destructor"<<endl;
	}
};
int main()
{
	char name[]="Bjarne Stroustrup";
	student s1(name, 3, 3);
	s1.show();
	{
		student s2=s1;
		s2.show();
	}
	s1.show();
	
	return 0;
}
