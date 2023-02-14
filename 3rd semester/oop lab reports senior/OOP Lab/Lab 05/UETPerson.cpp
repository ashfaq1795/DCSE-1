#include<iostream>
#include<string>
using namespace std;

class UETPerson
{
	protected:
		int id;
	    string name,address;
	public:
		UETPerson();
		UETPerson(int i,string n,string a);
		void changeAdd(string na);
		void display();
};
UETPerson::UETPerson()
{
	name="";
	address="";
	id=0;
}
UETPerson::UETPerson(int i,string n,string a)
{
	id=i;
	name=n;
	address=a;
}
void UETPerson::changeAdd(string na)
{
	address=na;
}
void UETPerson::display()
{
	cout<<"ID: "<<id<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Address: "<<address<<endl;
}
class Student:public UETPerson
{
	private:
		string course;
		int year;
	public:
		Student();
		Student(int i,string n,string a,int y,string c);
		void display();
};
Student::Student()
{
	course="";
	year=0;
}
Student::Student(int i,string n,string a,int y,string c)
{
	course=c;
    year=y;
	id=i;
	name=n;
	address=a;
}
void Student::display()
{
	cout<<"ID: "<<id<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Address: "<<address<<endl;
	cout<<"Course: "<<course<<endl;
	cout<<"Year: "<<year<<endl;
}
int main()
{
	string n,a,c,na;
	int i,y;
	cout<<"Name: ";
	cin>>n;
	cout<<"Address: ";
	cin>>a;
	cout<<"Cours: ";
	cin>>c;
	cout<<"ID: ";
	cin>>i;
	cout<<"Year: ";
	cin>>y;
	cout<<"Enter change Address: ";
	cin>>na;
	UETPerson chang;
	chang.changeAdd(na);
	Student s(i,n,na,y,c),obj;
	s.display();
	return 0;
}


