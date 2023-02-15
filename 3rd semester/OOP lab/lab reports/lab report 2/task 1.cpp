#include<iostream>
using namespace std;
class complex
{
	private:
		float re,img;
	public:
		complex();
		complex(float r,float i);
		void addcom(complex c1,complex c2);     //declear function
		void subcom(complex c1,complex c2);    //declear function
		void mulcom(complex c1,complex c2);   //declear function
		void inputs();                       //input function
		void display();                      //declear function
};
    complex::complex():re(0),img(0){}
    complex::complex(float r, float i):re(r),img(i){}
    void complex::addcom(complex c1, complex c2)     //define function outside class.
    {
    	re=c1.re+c2.re;
    	img=c1.img+c2.img;
	}
    void complex::subcom(complex c1, complex c2)  //define function outside class.
    {
    	re=c1.re-c2.re;
    	img=c1.img-c2.img;
	}
    void complex::mulcom(complex c1, complex c2) //define function outside class.
    {
    	re=c1.re*c2.re-c1.img*c2.img;
    	img=c1.re*c2.img+c1.img*c2.re;
	}
	void complex::inputs()
	{
		cout<<"real part: ";
		cin>>re;
		cout<<"imagnary part: ";
		cin>>img;
	}
	void complex::display()  //define function outside class.
	{
		if(img>0)
		cout<<re<<"+"<<img<<"i";
		else
		cout<<re<<img<<"i";
	}
int main()
{ 
complex c1,c2,c;
 cout<<"enter complex no c1: \n";
 c1.inputs();
 cout<<"enter complex no c2: \n";
 c2.inputs();
 cout<<"\ncomplex no c1 = ";
 c1.display();
 cout<<"\ncomplex no c2 = ";
 c2.display();
 cout<<"\n\nsum of two complex no: ";
 c.addcom(c1,c2);
 c.display();
 cout<<"\nsubtraction of two complex no: ";
 c.subcom(c1,c2);
 c.display();
 cout<<"\nproduct of two complex no: ";
 c.mulcom(c1,c2);
 c.display();

  return 0;	
};




	
