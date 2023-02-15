HEADER FILE (classes.h)
#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

#include <iostream>
using namespace std;
class Base
{
protected:
    double ba;
Public:
    void input_base();
    void show_base();
};

class Exponent
{
protected:
    double exp;
public:
    void input_exp();
    void show_exp();

};
class Power: public Base, Exponent
{
protected:
    int po;
public:
Power();
    void in1();
    void show1();
};

#endif 


Main File (main.cpp)
#include <iostream>
#include <Classes.h>

using namespace std;

void Base::input_base()
{
cout<<"Enter base : "<<endl;
cin>>ba;
}
double Base :: show_base()
{
    return ba;
}
void Exponent :: input_exp()
{
cout<<"Enter Exponent: ";
cin>>exp;
}
double Exponent :: show_exp()
{
    return exp;
}

Power :: Power():po(1){}
void Power :: in1()
{
input_base();
input_exp();
}
void Power :: show1()
{
cout<<"Base: "<<show_base()<<endl;
cout<<"Exponent: "<<show_exp()<<endl;
for(int i{0}; i<show_exp();i++)
        {
            po=po*show_base();
        }
cout<<"Power = "<<po<<endl;
}


int main()
{
    Power p1;
p1.in1();
    p1.show1();
    return 0;
}



