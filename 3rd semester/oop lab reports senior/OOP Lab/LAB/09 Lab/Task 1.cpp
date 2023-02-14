#include<iostream>
using namespace std;

class shape
{
	protected:
		const float pi=3.14;
	public:
		virtual void centerF()
		{
			
		}
		virtual void areaF()
		{
			
		}
		virtual void volumeF()
		{
			
		}
		virtual void display()=0;
};

class point:public shape
{
	protected:
		float x,y;
	public:
		point(float x1=0,float y1=0)
		{
			x=x1;
			y=y1;
		}
		virtual void display()
		{
			cout<<"Point:   "<<endl;
			cout<<"Center: ("<<x<<","<<y<<")"<<endl<<endl;
		}
};

class circle:public point
{
	protected:
		float area,radius;
	public:
		circle(float x1=0, float y1=0, float r=0)
		{
			x=x1;
			y=y1;
			radius=r;
		}
		void areaF()
		{
			area=pi*radius*radius;
		}
		virtual void display()
		{
			cout<<"Circle: "<<endl;
			cout<<"Center: ("<<x<<","<<y<<")"<<endl;
			cout<<"Radius: "<<radius<<endl;
			cout<<"Area: "<<area<<endl<<endl;
		}
};

class cylinder:public circle
{
	protected:
		float height,volume;
	public:
		cylinder(float x1=0,float y1=0,float r=0,float h=0)
		{
			x=x1;
			y=y1;
			radius=r;
			height=h;
		}
		void volumeF()
		{
			volume=pi*radius*radius*height;
		}
		virtual void display()
		{
			cout<<"Circle : "<<endl;
			cout<<"Center : ("<<x<<","<<y<<")"<<endl;
			cout<<"Radius : "<<radius<<endl;
			cout<<"Height : "<<height<<endl;
			cout<<"Volume : "<<volume<<endl<<endl;
		}
};

int main()
{
	shape *sh;
	point p(3,4);
	circle c(5,6,5.6);
	cylinder cy(7,8,3,4.5);
	sh=&p;
	sh->display();
	
	sh=&c;
	sh->areaF();
	sh->display();
	
	sh=&cy;
	sh->volumeF();
	sh->display();
	return 0;
}
