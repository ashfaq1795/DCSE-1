#include <iostream>
using namespace std;
class point 
{
private:
	int x,y;
public:
	point()
	{
		x=0;
		y=0;
	}
	point(int a,int b)
	{
		x=a;
		y=b;
	}
	void getx(int a)
	{
		x=a;
	}
	void gety(int b)
	{
		y=b;
	}
	void display()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};
int main()
{
	point p1;
	cout<<"original value of p1 is: ";  //original value of p1 is (0,0).we can also fix this value to p2 directly.
	p1.display();
	p1.getx(3);
	p1.gety(6);
	cout<<"updated value of p1 is: ";
	p1.display();
	point p2=(3,6); // we can also fix original value.
	cout<<"original value of p2 is: ";
	p2.display();
	p2.getx(4);
	p2.gety(9);
	cout<<"updated value of p2 is: ";
	p2.display();
	return  0;
}
