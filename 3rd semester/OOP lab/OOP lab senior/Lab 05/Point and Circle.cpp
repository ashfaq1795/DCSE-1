#include<iostream>
using namespace std;

class point
{
	protected:
		int x,y;
	public:
		point();
		point(int x_new,int y_new);
		int setX(int x_new);
		int setY(int y_new);
		int getX();
		int getY();
		void display() const;
};
point::point()
{
	x=0;
	y=0;
}
point::point(int x_new,int y_new)
{
	x=x_new;
	y=y_new;
}
int point::setX(int x_new)
{
	x=x_new;
}
int point::setY(int y_new)
{
	y=y_new;
}
int point::getX()
{
	return x;
}
int point::getY()
{
	return y;
}
void  point::display() const
{
	cout<<"X: "<<x<<" Y: "<<y<<endl;
}
		

class circle:public point
{
	protected:
		float radius;
	public:
		circle();
		circle(float r,point c);
		circle(float r, float x_new,float y_new);
		int setR(float r);
		int getR();
		float circumference();
};
circle::circle()
{
	radius=0;
	x=0;
	y=0;
}
circle::circle(float r,point c)
{
	radius=r;
	x=c.getX();
	y=c.getY();
}
circle::circle(float r,float x_new,float y_new)
{
	radius=r;
	x=x_new;
	y=y_new;
}
int circle::setR(float r)
{
	radius=r;
}
int circle::getR()
{
	return radius;
}
float circle::circumference()
{
	return 2*3.14*radius;
}

int main()
{
	float x,y;
	cout<<"Enter X: ";
	cin>>x;
	cout<<"Enter Y:";
	cin>>y;
	point p(x,y);
	circle c(x,p);
	
	cout<<"Radius: "<<c.getR()<<endl;
	cout<<"Circumference: "<<c.circumference()<<endl;
	return 0;
}


