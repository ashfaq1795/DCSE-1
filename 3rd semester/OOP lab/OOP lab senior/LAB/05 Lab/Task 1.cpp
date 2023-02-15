#include<iostream>
using namespace std;

class point
{
	protected:
		float x,y;
	public:
		point()
		{
			x=0;
			y=0;
		}
		point(float x_new,float y_new)
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
		void displayXY()
		{
			cout<<"( "<<x<<","<<y<<" )"<<endl;
		}
		
};
class circle: public point
{
	private:
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
		float setRadius(float r)
		{
			radius=r;
		}
		float getRadius()
		{
			return radius;
		}
		float area()
		{
			return 3.14*radius*radius;
		}
		float circumference()
		{
			return 3.14*2*radius;
		}
		
};
int main()
{
	circle c(4,3,5);
	cout<<"Area of Circle Is: "<<c.area()<<endl;
	cout<<"Circumference of Circle Is: "<<c.circumference()<<endl;
	return 0;
	
}
