#include<iostream>

using namespace std;

class shape
{
protected:
    int var1,var2;
public:
    virtual void show()=0;
    virtual double area()
    {

    }
    virtual double volume()
    {

    }
};
class point:public shape
{
protected:
    int var3,var4;
public:
	point() {
		var3 = 0;
		var4 = 0;
	}
    point(int var5,int var6)
    {
        var3 =var5;
        var4 = var6;
    }
    void show()
    {
        cout<<"\nPoint X="<<var3;
        cout<<"\nPoint Y="<<var4;
    }
};
class circle:public point
{
protected:
    int radius;
public:
    double area()
    {
        var1 =3.14*radius*radius;
        return var1;
    }
    void show()
    {
        cout<<"\nPoint X of Circle: "<<var3<<"\nPoint Y of Circle :"<<var4<<"\nRadius of Circle :"<<radius;
        cout<<"\nArea of Circle: "<<area()<<endl;
    }
    circle():point()
    {
        radius=0;
        var3=0;
        var4=0;
    }
    circle(int var7, int var8, int var9):point()
    {
        var3 = var7;
        var4 = var8;
        radius= var9;
    }
};
class cylinder:public circle
{
protected:
    int hieght;
public:
    void show()
    {
        cout<<"\nPoint X of Cylinder: "<<var3<<"\nPoint Y of Cylinder :"<<var4<<"\nRadius of Cylinder :"<<radius<<"\nhieght of cylinder :"<<hieght<<endl;
        cout<<"\n Area of cylinder :"<<area()<<endl;
        cout<<"\n Volume of cylinder :"<<volume()<<endl;
    }
    cylinder()
    {
        hieght=0;
        radius=0;
        var3=0;
        var4=0;
    }
    cylinder(int var10,int var11,int var12,int var13)
    {
        var3 = var10;
        var4 = var11;
        radius=var12;
        hieght=var13;
    }
    double area()
    {
        var1=(2*3.14*radius)*(radius + hieght);
        return var1;
    }
    double volume()
    {
        var2=3.14*(radius * radius)*hieght;
        return var2;
    }
};
int main()
{
    shape * ptr;
    cylinder Cylinder(6,62,95,4);
    ptr = &Cylinder;
    ptr->show();
    
    point Point(79, 26);
    ptr = &Point;
    ptr->show();
    
    circle Circle(33,83,8);
    ptr = &Circle;
    ptr->show();
}
