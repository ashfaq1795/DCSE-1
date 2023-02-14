#include<iostream>
using namespace std;

class point
{
	protected:
		float x,y;
	public:
		point(float x_new=0,float y_new=0)
		{
			x=x_new;
			y=y_new;
		}
		void setX(float x_new)
		{
			x=x_new;
		}
		void setY(float y_new)
		{
			y=y_new;
		}
		float getX()
		{
			return x;
		}
		float getY()
		{
			return y;
		}
		void const DisplayXY()
		{
			cout<<"( "<<x<<" , "<<y<<")"<<endl;
		}
		
};

class circle:public point
{
	protected:
		float radius;
		point center;
	public:
		circle()
		{
			radius=0;
		}
		circle(float r,point c)
		{
			radius=r;
			center=c;
		}
		circle(float r,float x_new,float y_new)
		{
			radius=r;
			x=x_new;
			y=y_new;
		}
		void setRadius(float r)
		{
			radius=r;
		}
		float getRadius()
		{
			return radius;
		}
		float getArea()
		{
			return 3.14*radius*radius;
		}
		float circumference()
		{
			return 2*(3.14)*radius;
		}
};
class cylinder:public circle
{
	private:
		float height;
	public:
		cylinder(float r=0,float h=0,point c=0)
		{
			height=h;
			radius=r;
			center=c;
		}
		float getArea()
		{
			return 2*3.14*radius + 2*3.14*height;
		}
		float getVolum()
		{
			return 2*3.14*radius*radius*height;
		}
};
int main()
{
	int r,h;
	cout<<"Enter Radius of Cylinder: ";
	cin>>r;
	cout<<"Enter Height of Cylinder: ";
	cin>>h;
	cylinder c(r,h);
	cout<<"Area of Cylinder Is: "<<c.getArea()<<endl;
	cout<<"Volume of Cylinder Is: "<<c.getVolum()<<endl;
}
