#include<iostream>
using namespace std;

class point
{
	private:
		int x,y;
	public:
		point(int x1=0,int y1=0)
		{
			x=x1;
			y=y1;
		}
		void change(int x1,int y1)
		{
			x+=x1;
			y+=y1;
		}
		void show()
		{
			cout<<"( "<<x<<" , "<<y<<" )"<<endl;
		}
		point operator+(point p);
		point operator-(point p);
		point operator+=(point p);
		point operator-=(point p);
		point operator-();
};

point point::operator+(point p)
{
	point res;
	res.x=this->x+p.x;
	res.y=this->y+p.y;
	return res;
};
point point::operator-(point p)
{
	point res;
	res.x=this->x-p.x;
	res.y=this->y-p.y;
	return res;
};
point point::operator+=(point p)
{
	this->x=this->x+p.x;
	this->y=this->y+p.y;
};
point point::operator-=(point p)
{
	this->x=this->x-p.x;
	this->y=this->y-p.y;
};
point point::operator-()
{
	point res;
	res.x=-x;
	res.y=-y;
	return res;
};

int main()
{
	point p2(3,4),p1(4,5),result;
	cout<<"P1: ";
	p1.show();
	cout<<"P2: ";
	p2.show();
	result=p1+p2;
	cout<<"Sum of P1 and P2 Is: ";
	result.show();
	result=p1-p2;
	cout<<"Difference of P1 and P2 Is: ";
	result.show();
	p1=-p2;
	cout<<"-P2: ";
	p1.show();
	return 0;
}
