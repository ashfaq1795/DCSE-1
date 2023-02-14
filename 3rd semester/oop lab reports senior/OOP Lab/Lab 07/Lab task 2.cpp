#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private :
		char *name;
		int rollnumber;
		float cgpa;
		static float cgpatot;
		static int count;
	public :
		student();
		student(const student &s1);
		student(char *n,int r,float g);
	    void setname(char *na);
	    void setrollnumber(int ro);
	    void setcgpa(float cg);
	    char & getname();
	    int getrollnumber();
	    float getcgpa();
	    void show();
	    static void showavg();
	    ~student();
};
student :: student():rollnumber(0),cgpa(0)
{
	name =NULL;
	count++;
}
student :: student(const student &obj)
{
	name = new char;
	strcpy(name,obj.name);
	rollnumber = obj.rollnumber;
	cgpa = obj.cgpa;
	count = obj.count;
	cgpatot = obj.cgpatot;

}
student :: student(char *n, int r, float g): rollnumber(r), cgpa(g)
{
	name=new char[strlen(n) + 1];
	strcpy(name, n);
	count++;
	cgpatot += cgpa;
}
void student :: setname(char *na)
{
	name = new char;
	strcpy(name,na);
}
void student :: setrollnumber(int ro)
{
	rollnumber = ro;
}
void student :: setcgpa(float cg)
{
	cgpa = cg;
	cgpatot+=cgpa;
}
char &student :: getname()
{
	return *name;
}
int student :: getrollnumber()
{
	return rollnumber;
}
float student :: getcgpa()
{
	return cgpa;
}
void student :: show()
{
	cout<<"NAME OF STUDENT IS : "<<name<<endl;
	cout<<"ROLL NO OF STUDENT IS : "<<rollnumber<<endl;
	cout<<"CGPA OF STUDENT IS : "<<cgpa<<endl;
}

void student :: showavg()
{
	cout<<"THE NUMBER OF STUDENTS RECORD SAVED IS : "<<count<<endl;
	cout<<"AVERAGE CGPA OF STUDENTS : "<<(cgpatot/count)<<endl;
}
student :: ~student()
{
	delete[] name;
	cout<<"Destructor: "<<endl;
}

float student::cgpatot=0;
int student::count=0;

int main()
{
	char name[]="Jamshid";
	char name2[]="Bacha";
	student s1(name,5,3.2),s2;
	s1.show();
	cout<<"\nUsing of Get AND Set Functions : \n\n";
	
	s2.setname(name2);
	s2.getname();
	
	s2.setrollnumber(12);
	s2.getrollnumber();
	
	s2.setcgpa(3.4);
	s2.getcgpa();
	
	s2.show();
	cout<<"\n\nAverage Cgpa function called now\n\n";
	student::showavg();

	return 0;
}

