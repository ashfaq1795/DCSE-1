#include<iostream>

using namespace std;
class shape
{
	protected:
		const float pi=3.14;
	public:
		virtual void centerF(){}
		virtual void AreaF(){}
		virtual void volumeF(){}
		virtual void show()=0;
		
};
class point:public shape
{
	protected:
		int x,y;
	public:
		point():x(0),y(0){}
		point(int xx,int yy):x(xx),y(yy){}
		void show()
		{
			cout<<"Point: "<<endl;
			cout<<"("<<x<<" , "<<y<<")"<<endl;
		}
};
class circle:public point
{
	protected:
		float radius,area;
	public:
		circle()
		{
			x=0;
			y=0;
			radius=1;
		}
		circle(int xx,int yy,float r)
		{
			x=xx;
			y=yy;
			radius=r;
		}
		void AreaF()
		{
			area=pi*radius*radius;
		}
		void show()
		{
			cout<<"Circle: "<<endl;
			cout<<"("<<x<<" , "<<y<<")"<<endl;
			cout<<"Radius: "<<radius<<endl;
			cout<<"Area: "<<area<<endl;
		}
};
class Cylinder:public circle
{
	protected:
		float height,volume;
	public:
		Cylinder()
		{
			x=0;
			y=0;
			radius=1;
			height=0;
		}
		Cylinder(int xx,int yy,float r,float h)
		{
			x=xx;
			y=yy;
			radius=r;
			height=h;
		}
		void volumeF()
		{
			volume=height*2*pi*radius*radius;
		}
		void show()
		{
			cout<<"Circle: "<<endl;
			cout<<"("<<x<<" , "<<y<<")"<<endl;
			cout<<"Height: "<<height<<endl;
			cout<<"Volume: "<<volume<<endl;
		}
		
};
int main()
{
	shape *p;
	point pio(3,4);
	circle ci(3,4,5);
	Cylinder cy(1,2,3,4);
//	p=new point;
//	p->show();
	p=&pio;
	p->show();
	p=&ci;
	p->show();
	p=&cy;
	p->show();
	return 0;
}
