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
		student(): roll(0), semester(0)
		{	
			name=NULL;
		}
		student(const student &s1)
		{
			name = new char;
			strcpy(name,s1.name);
			roll = s1.roll;
			semester = s1.semester;
		}
		student(char *n, int r, int s): roll(r), semester(s)
		{
			name=new char[strlen(n) + 1];
			strcpy(name, n);
		}
		void set()
		{
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Enter roll no: "<<endl;
			cin>>roll;
			cout<<"Enter semester: "<<endl;
			cin>>semester;
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
			cout<<"Destructor: "<<endl;
		}
};
int main()
{
	char name[]="Bjarne Stroustrup";
	student s1(name, 3, 3);
	s1.show();
	student s2(s1);
	s2.show();
	
	s2.set();
	cout<<"After setting s2:"<<endl;
	cout<<"Data of student S1"<<endl;
	s1.show();
	cout<<"Data of student s2"<<endl;
	s2.show();
	
	return 0;
}
