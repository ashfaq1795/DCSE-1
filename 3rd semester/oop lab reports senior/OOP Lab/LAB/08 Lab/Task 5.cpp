#include<iostream>
using namespace std;

class complex
{
	private:
		int real,imag;
	public:
		complex(int ,int );
		void show();
		friend complex operator+(complex &a,complex &b);
		friend complex operator+=(complex &a,complex &b);
		friend complex operator-(complex &a,complex &b);
		friend complex operator-=(complex &a,complex &b);
		friend complex operator++(complex &a);
		friend complex operator--(complex &a);
		friend complex operator*(complex &a,complex &b);
		friend complex operator*=(complex &a,complex &b);
};

complex::complex(int r=0,int i=0)
{
	real=r;
	imag=i;
};

void complex::show()
{
	cout<<"("<<real<<","<<imag<<")"<<endl;
};

complex operator+(complex &a,complex &b)
{
	return complex(a.real+b.real,a.imag+b.imag);
};

complex operator+=(complex &a,complex &b)
{
	a.real=a.real+b.real;
	a.imag=a.imag+b.imag;
};

complex operator-(complex &a,complex &b)
{
	return complex(a.real-b.real,a.imag-b.imag);
};

complex operator-=(complex &a,complex &b)
{
	a.real=a.real-b.real;
	a.imag=a.imag-b.imag;
};

complex operator++(complex &a)
{
	a.real++;
};

complex operator--(complex &a)
{
	a.real--;
};

complex operator*(complex &a,complex &b)
{
	return complex((a.real*b.real)-(a.imag*b.imag)  ,  (a.real*b.imag)+(b.real*a.imag));
};

complex operator*=(complex &a,complex &b)
{
	int x=a.real;
	int y=a.imag;
	a.real=(x*b.real)-(y*b.imag);
	a.imag=(x*b.imag)+(y*a.imag);
};
int main()
{
	int r,i;
	
	cout<<"Enter 1st Complex No.: "<<endl;
	cout<<"Enter real Part: ";
	cin>>r;
	cout<<"Enter imagnary Part: ";
	cin>>i;
	complex c1(r,i);
	
	cout<<"Enter 2nd Complex No.: "<<endl;
	cout<<"Enter real Part: ";
	cin>>r;
	cout<<"Enter imagnary Part: ";
	cin>>i;
	
	complex c2(r,i);
	complex result;
	
	cout<<"C1: ";
	c1.show();
	cout<<"C2: ";
	c2.show();
	
	result=c1+c2;
	cout<<"Sum of C1 and C2 Is: ";
	result.show();
	
	result=c1-c2;
	cout<<"Difference of C1 and C2 Is: ";
	result.show();
	
	result=c1*c2;
	cout<<"Product of C1 and C2 Is: ";
	result.show();
	
	++c1;
	cout<<"C1++ : ";
	c1.show();
	
	--c2;
	cout<<"C2-- : ";
	c2.show();
	
	cout<<"Now***--------***"<<endl;
	cout<<"C1 : ";
	c1.show();
	cout<<"C2 : ";
	c2.show();
	
	c1+=c2;
	cout<<"C1+=C2 : ";
	c1.show();
	
	cout<<"Now***--------***"<<endl;
	cout<<"C1 : ";
	c1.show();
	cout<<"C2 : ";
	c2.show();
	
	c1-=c2;
	cout<<"C1-=C2 : ";
	c1.show();
	
	cout<<"Now***--------***"<<endl;
	cout<<"C1 : ";
	c1.show();
	cout<<"C2 : ";
	c2.show();
	
	c1*=c2;
	cout<<"C1*=C2 : ";
	c1.show();
	cout<<"***-------------------------------------***"<<endl;
	return 0;
}

