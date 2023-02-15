#include<iostream>
using namespace std;
class complex
{
	private:
		float real,imag;
	public:
		complex()
		{
			real=0;
			imag=0;
		}
		complex(float r,float i)
		{
			real=r;
			imag=i;
		}
		void sum(complex c1,complex c2)
		{
			real = c1.real + c2.real;
			imag = c1.imag + c2.imag;
		}
		void sub(complex c1,complex c2)
		{
			real = c1.real - c2.real;
			imag = c1.imag - c2.imag;
		}
		void multiply(complex c1,complex c2)
		{
			real=c1.real*c2.real - c1.imag*c2.imag;
			imag=c1.real*c2.imag + c1.imag*c2.real;
		}
		void show()
		{
			cout<<endl<<real<<" , "<<imag<<"i"<<endl;
		}
};

int main()
{
	float real,imag;
	cout<<"Enter First complex Number: "<<endl;
	cout<<"Real Part: ";
	cin>>real;
	cout<<"Imagenary Part: ";
	cin>>imag;
	complex c1(real,imag);
	cout<<endl<<"Enter Second complex Number: "<<endl;
	cout<<"Real Part: ";
	cin>>real;
	cout<<"Imagenary Part: ";
	cin>>imag;
	
	complex c2(real,imag),c3;
	cout<<"Sum of Two Complex Numbers: "<<endl;
	c3.sum(c1,c2);
	c3.show();
	
	cout<<endl;
	
	cout<<"Subtraction of Two Complex Numbers: "<<endl;
	c3.sub(c1,c2);
	c3.show();
	
	cout<<endl;
	
	cout<<"Multiplication of Two Complex Numbers: "<<endl;
	c3.multiply(c1,c2);
	c3.show();
	
	cout<<endl;
	return 0;
	
}
