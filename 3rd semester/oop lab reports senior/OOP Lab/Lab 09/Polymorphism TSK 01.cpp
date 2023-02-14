#include<iostream>
using namespace std;
class shape
{ 
    public:
    virtual void draw()
    {
        cout<<"Shape class"<<endl;
    }
};

class triangle: public shape
{
    public:
    void draw()
    {
        cout<<"Triangle class"<<endl;
    }
};

class rectangle: public shape
{
    public:
    void draw()
    {
        cout<<"Rectangle class"<<endl;
    }
};

class circle: public shape
{
    public:
    void draw()
    {
        cout<<"Circle class"<<endl;
    }
};

int main()
{
    shape *sh;
    triangle t;
    rectangle r;
    circle c;
    sh=&t; 
	sh->draw();
	
    sh=&r; 
	sh->draw();
	
    sh=&c; 
	sh->draw();
	return 0;
}
