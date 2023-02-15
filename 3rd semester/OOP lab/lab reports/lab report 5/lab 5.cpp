#include <iostream>
using namespace std;
class point 
{
	protected:
		int x,y;
	public:
		point();
		point(int a,int b);
		int setX(int a);
		int setY(int b);
		int getX();
		int getY();
		void show() const;
};
point::point()
{
	x=0;
	y=0;
}
point::point(int a,int b)
{
	x=a;
	y=b;
}
int point::setX(int a)
{
	x=a;
}
int point::setY(int b)
{
	y=b;
}
int point::getX()
{
	return x;
}
int point::getY()
{
	return y;
}
void  point::show() const
{
	cout<<"point is : ("<<x<<","<<y<<")"<<endl;
}
class circle : public point
{
	protected: 
	float re;
	public:
		circle();
		circle(float r, point p);
		circle(float r,float a,float b);
		void setr(float r);
		float getr();       //void
		float redius();      //void
		float circumferance(); //void	
};
circle::circle()
{
	re = 0, x = 0, y = 0;
}
circle::circle(float r, point p)
{
	re = r;
	x = p.getX();
	y = p.getY();
}
circle::circle(float r, float a, float b)
{
	re = r, x = a, y = b;
}
void circle::setr(float r)   //float r
{
	re=r;
}
float circle::getr()
{
	return re;
}
float circle::circumferance()
{
	return 2*3.14*re;
}
float circle::redius()
{
	return circumferance()/(2*3.14);
}
class cylander: public point
{
 protected:
  float re,height;
  public:
  cylander();
  cylander(float r, float h, point p);
  cylander(float r, float h, float a,float b);
  cylander(float h, circle c);
  float area();
  float vol();
};
cylander::cylander(): re(0),height(0){}
cylander::cylander(float r, float h, point p)
{
	re=r;
	height=h;
	x=p.getX();
	y=p.getY();
}
cylander::cylander(float r, float h, float a, float b)
{
	re=r;
	height=h;
	x=a;
	y=b;
}
cylander::cylander(float h, circle c)
{
	height=h;
	re=c.getr();
	x=c.getX();
	y=c.getY();
}
float cylander::area()
{
	circle c(re, x,y);
	return c.circumferance() * (re+height);
}
float cylander::vol()
{
		circle c(re, x,y);
	return c.circumferance() * re * height;
}
int main()
{
	int x,y;
	cout<<"Please Enter x-corrdinate: ";
	cin>>x;
	cout<<"Please Enter y-corrdinate: ";
	cin>>y;
 point p(x,y);
 circle c(x,p);
 p.show();	
 cout<<"Redius is: "<<c.getr()<<endl;
 cout<<"circumferance is: "<<c.circumferance()<<endl;
 cylander cy(x,c);
 cout<<"area of cylander : "<<cy.area()<<endl;
 cout<<"voloum of cylander : "<<cy.vol()<<endl;
	
return 0;	
};
 
 
 
 
 
