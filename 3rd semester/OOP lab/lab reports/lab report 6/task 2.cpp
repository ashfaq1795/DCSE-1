#include <iostream>

using namespace std;
class Base
{
protected:
    double ba;
void input_base()
{
cout<<"Enter base : ";
cin>>ba;
}
double show_base()
{
    return ba;
}
};

class Exponent
{
protected:
    double exp;
public:
void input_exp()
{
cout<<"Enter Exponent: ";
cin>>exp;
}
double show_exp()
{
    return exp;
}
};
class Power: public Base, Exponent
{
protected:
    int po;
public:
    Power():po(1){}
public:
void in1()
{
input_base();
input_exp();
}
void show1()
{
cout<<"Base: "<<show_base()<<endl;
cout<<"Exponent: "<<show_exp()<<endl;
for(int i{0}; i<show_exp();i++)
        {
            po=po*show_base();
        }
cout<<"Power = "<<po<<endl;
}
};


int main()
{
    Power p1;
p1.in1();
    p1.show1();
    return 0;
}


