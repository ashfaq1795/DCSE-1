#include <iostream>
#include<string>
#include<cstring>
using namespace std;
class employee
{
	private:
		char *name,*department;    //dynamic veriable
		double salary,service;
		public:
			employee()   // default constructor initialization
			{                                         
		      name=" ";  
              department=" ";
              salary=0;
              service=0;

			}
			employee(char n[],char d[], double s, double p)  //perameterized constructor
			{
				name=n;
				department=d;
				salary=s;
				service=p;
			}
			employee(const employee &e)                            // custom copy constructor - Deep 
			{ 
                int len1 = strlen(e.name); // step 1: find length of input array 
                 name = new char[len1+1]; // step 2: create name of length n + 1 ('/0') 
                int len2 = strlen(e.department);
               department= new char [len2+1];
                strcpy (name,e.name); // step 3: copy using strcpy 
                strcpy (department,e.department);
                salary = e.salary; 
                service = e.service; 
			}
			~employee()
			{ 
           cout << "Terminating object." << endl; 
            delete name; 
            delete department;
            }
          void input()
		  { 
		  char n[100],d[100];
		  cout<<"please enter employer Data.....\n";
		  	cout<<"Name: ";
		  	cin>>n;                   //this cin for writing last name after spacing
		  	 int l1=strlen(n);
		     name=new char[l1+1];
		     strcpy(name,n);
		     cout<<"Department: ";
		     cin>>d;
		     int l2=strlen(d);
		     department= new char[l2+1];
		     strcpy(department,d);
		     cout<<"Salary: ";
		     cin>>salary;
		     cout<<"Period of service: ";
		     cin>>service;
		     
			}  
             void show(){ 
             cout<<"\n\nemployee Data......."<<endl; 
             cout<<"Name: "<<name<<endl;                                
             cout<<"department:  "<<department<<endl; 
             cout<<"salary:  "<<salary<<endl;
			 cout<<"preiod of service: "<<service<<"years"<<endl;
}

};
   int main()
   {
   	employee e;
   	e.input();
   	e.show();
   	employee e1(e);   //function notation  for copying object e in e1.
   	cout<<"\n\nAfter copying pre-existing object's data in newly created object by using function notation:\n";
   	e1.show();
   	employee e2=e; //assignment notation  for calling copy constructor e.(we can also copying e data from e1)
   	cout<<"\n\nAfter copying pre-existing object's data in newly created object by using assignment notation: \n";
   	e2.show();
   	cout<<endl;
   	
   	return 0;
   	
   };



