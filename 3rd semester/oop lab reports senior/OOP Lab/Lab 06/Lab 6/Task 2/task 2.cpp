#include <iostream>

using namespace std;

class Liquid
{
private:
    float specific_gravity;
public:
    Liquid();
    Liquid(float sg);
    void setSpecific_Gravity(float sg);
    float getSpecific_Gravity();
    void show();
};

Liquid::Liquid()  
{
	specific_gravity=0;
}
Liquid::Liquid(float sg)  
{
	specific_gravity=sg;
}
void Liquid::setSpecific_Gravity (float sg)
{
    specific_gravity=sg;
}
float Liquid::getSpecific_Gravity()
{
    return specific_gravity;
}
void Liquid::show()
{
    cout<<"The specific gravity of the liquid is : "<<specific_gravity<<endl;
}

class Fuel
{
private:
    float rate;
public:
    Fuel();
    Fuel(float r);
    void setRate(float r);
    float getRate();
    void show();
};

Fuel::Fuel() : rate(0) {}
Fuel::Fuel(float r) : rate(r) {}
void Fuel::setRate(float r)
{
    rate=r;
}
float Fuel::getRate()
{
    return rate;
}
void Fuel::show()
{
    cout<<"The rate of the fuel is : "<<rate<<endl;
}

class Petrol : public Liquid , public Fuel
{
public:
    Petrol();
    Petrol(float sg , float r);
    void setValues(float sg , float r);
    void show();
};

Petrol::Petrol() 
{
	Liquid=0;
	Fuel=0;
}
Petrol::Petrol(float sg , float r) 
{
	Liquid=sg ;
	Fuel=r;
}
void Petrol::setValues(float sg , float r)
{
    setRate(r);
    setSpecific_Gravity(sg);
}
void Petrol::show()
{
    Liquid::show();
    Fuel::show();
}


int main()
{
    Petrol a(3.4 , 1.4);
    a.show();

    return 0;
}

