#include<iostream>
using namespace std;
class complex
{
	private :
		float real,img;
	public :
		complex();
		complex(float r,float i);
		
		complex setreal(float r);
	 	complex setimg(float i);
	 	
		float getreal() const;	
		float getimg() const;
		
	 	complex& print();
	
};


complex :: complex():real(0),img(0){}
complex :: complex(float r,float i):real(r),img(i){}
complex &complex::print()
{
	cout<<"("<<real<<"+"<<img<<"i"<<")";
	return *this;
}
float complex::getreal() const
{
	return real;
}
float complex::getimg() const
{
	return img;
}
complex complex::setreal(float r)
{
    real = r;	
	return *this;
}
complex complex::setimg(float i)
{
	img = i;
	return *this;
}
int main()
{
	complex c1,c2(3,7);
	
	c1.setreal(5).setimg(10).print();
	
	cout<<"\n\nSecond Object runnig now\n\n";
	c2.getreal();
	c2.getimg();
	c2.print();
	return 0;
}


