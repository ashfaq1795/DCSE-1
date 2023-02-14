#include<iostream>
using namespace std;

class circle
{
	private:
		float radius;
	public:
	circle();
	circle(float r);
	void show();
	void area();
	void param();
	bool isEqual(circle c1, circle c2);
};
circle::circle()
{
	radius=1;
}

circle::circle(float r)
{
	radius=r;
}

void circle::show()
{
	cout<<radius<<endl<<endl;
}

void circle::area()
{
	cout<<"Area of Circle: "<<3.14*radius*radius<<endl<<endl;
}
void circle::param()
{
	cout<<"Parameter of Circle: "<<3.14*2*radius<<endl<<endl;
}

bool circle::isEqual(circle c1,circle c2)
{
	if(c1.radius==c2.radius)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	circle c1(5),c2(3),c;
	cout<<"Radius of Circle One Is: ";
	c1.show();
	cout<<"Radius of Circle Two Is: ";
	c2.show();
	c1.area();
	c1.param();
	if(c.isEqual(c1,c2))
	{
		cout<<"The Circle are Same: "<<endl;
	}
	else
	{
		cout<<"The circle are not same: "<<endl;
	}
	return 0;
}

