#include<iostream>
using namespace std;
class complex
{
	private:
		float re;
		float im;
	public:
	    complex()
	    {
		    re=0;
		    im=0;
		}	
		complex(float r,float i)
		{
			re=r;
			im=i;
		}
		void add(complex c2,complex c3)
		{
			re = c2.re + c3.re;
			im = c2.im + c3.im;
		}
		void sub(complex c2,complex c3)
		{
			re = c2.re - c3.re;
			im = c2.im - c3.im;
		}
		void mult(complex c2,complex c3)
		{
			re=c2.re * c3.re - c2.im * c3. im;
			im=c2.re * c3.im + c2.im * c3.re;
		}
		void display()
		{
			cout<<"( "<<re<<" , "<<im<<" )";
		}
};

int main()
{
	complex c1,c2(2,3),c3(4,5);
	c1.add(c2,c3);
	cout<<"Addition of (2 + 3!) and (4 + 5!) Is :  ";
	c1.display();
	cout<<endl<<endl;
	c1.sub(c2,c3);
	cout<<"Subraction of (2 + 3!) and (4 + 5!) Is :  ";
	c1.display();
	cout<<endl<<endl;
	c1.mult(c2,c3);
	cout<<"Multiplication of (2 + 3!) and (4 + 5!) Is :  ";
	c1.display();
	cout<<endl;
	return 0; 
	
}
