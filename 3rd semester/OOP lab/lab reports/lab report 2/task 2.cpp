#include <iostream>
using namespace std;
class complex
{
	private:
		double re,img;
	public:
		void input();
		complex addcom(complex c1);
		complex subcom(complex c1);
		complex mulcom(complex c1);
		void display();
};
     void complex::input()
   {
   	cout<<"enter real part: ";
   	cin>>re;
   	cout<<"enter img part: ";
   	cin>>img;
   } 
	 complex complex::addcom(complex c1)
     {
     	complex temp1;
     	temp1.re=c1.re+re;
     	temp1.img=c1.img+img;
     	return temp1;
	 }
	  complex complex::subcom(complex c1)
     {
     	complex temp1;
     	temp1.re=c1.re-re;
     	temp1.img=c1.img-img;
     	return temp1;
	 }
	  complex complex::mulcom(complex c1)
     {
     	complex temp1;
     	temp1.re=c1.re*re-c1.img*img;
     	temp1.img=c1.re*img-c1.img*re;
     	return temp1;
	 }
	 void complex::display()
	 {
	 	if(img>0)
	 	cout<<re<<"+"<<img<<"i";
	 	else
	 	cout<<re<<img<<"i";
	 }
	 
	 int main()
	 {
	 	complex c1,c2,c;
   c1.input();
   c1.display();
   cout<<endl;
   c2.input();
   	c2.display();
   cout<<"\nsum :";
   c=c2.addcom(c1);
   c.display();
   cout<<"\nDifference :";
   c=c2.subcom(c1);
   c.display();
    cout<<"\nproduct :";
   c=c2.mulcom(c1);
   c.display();
     
   	

	 	return 0;
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
