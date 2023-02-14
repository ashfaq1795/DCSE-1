#include<iostream>
using namespace std;

class Time
{
	private:
		int hours,minuts,seconds;
	public:
		Time();
		Time(int h,int m,int s);
		void show();
		Time operator+(Time t);
		Time operator++(); //Pre Increamnet
		Time operator--(); // Pre Decreamnet 
		Time operator++(int); // Post Increamnet 
		Time operator--(int); // post Decreamnet
};

Time::Time()
{
	hours=0;
	minuts=0;
	seconds=0;
}
Time::Time(int h,int m,int s)
{
	if(s>0)
	{
	if(s>=60)
	{
		s=s-60;
		m++;
	}
    }
    else
    s=0;
    if(m>0)
    {
	if(m>=60)
	{
		m=m-60;
		h++;
	}
    }
    else
    m=0;
	hours=h;
	minuts=m;
	seconds=s;
}
Time Time::operator+(Time t)
{
	Time sum;
	sum.hours=t.hours+hours;
	sum.minuts=t.minuts+minuts;
	sum.seconds=t.seconds+seconds;
	if(sum.seconds>=60)
	{
		sum.seconds-=60;
		sum.minuts++;
	}
	if(sum.minuts>=60)
	{
		sum.minuts-=60;
		sum.hours++;
	}
	return sum;
}

Time Time::operator++()
{
	++seconds;
	if(seconds>=60)
	{
		seconds-=60;
		minuts++;
	}
	if(minuts>=60)
	{
		minuts-=60;
		hours++;
	}
	return *this;
}



Time Time::operator--()
{
	Time decreament;
	decreament.seconds=--seconds;
	
	if(decreament.seconds<0)
	decreament.seconds=0;
	else
	{
    	if(decreament.seconds>=60)
    	{
		decreament.seconds-=60;
		decreament.minuts++;
    	}
	}
	
	
	if(decreament.minuts<0)
	decreament.minuts=0;
	else
	{
	if(decreament.minuts>=60)
	{
		decreament.minuts-=60;
		decreament.hours++;
	}
	}	


	return decreament;
}

Time Time::operator++(int)
{
	Time t=*this;
    if (seconds+1<60)
        seconds++;
    else if (minuts+1<60)
    {
        seconds=0;
        minuts++;
    }
    else if(hours+1<12)
    {
        seconds=0;
        minuts=0; 
        hours++;
    }
    else
        cout<<"Invalid Operation"<<endl;

    return t;
}

Time Time::operator--(int)
{
	Time decreament;
	decreament.seconds=seconds--;
	
	if(decreament.seconds<0)
	decreament .seconds=0;
	else
	{
    	if(decreament.seconds>=60)
    	{
		decreament.seconds-=60;
		decreament.minuts++;
    	}
	}
	
	
	if(decreament.minuts<0)
	decreament.minuts=0;
	else
	{
	if(decreament.minuts>=60)
	{
		decreament.minuts-=60;
		decreament.hours++;
	}
	}	


	return decreament;
}
void Time::show()
{
	cout<<hours<<" : "<<minuts<<" : "<<seconds<<endl;
}




int main()
{
	Time t1(1,12,3),t2(4,50,3);
	t1.show();
	t2.show();
	Time sum=t1+t2;
	cout<<endl;
	cout<<"Sum of T1 and T2: "<<endl;
	sum.show();
	cout<<endl;
	
	cout<<"Sum After Post increament in T1: "<<endl;
	sum=t1++ +t2;
	sum.show();
	
	cout<<"This is T1 after post increament: "<<endl;
	t1.show();
	cout<<"Sum After Pre increament in T1: "<<endl;
	sum=++t1 + t2;
	sum.show();
	cout<<"This is T1 after pre increament: "<<endl;
	t1.show();
	cout<<endl;
	cout<<"Sum After Post decreament T1: "<<endl;
	sum=t1-- +t2;
	sum.show();
	
	cout<<"This is T1 after post decreament: "<<endl;
	t1.show();

    cout<<"Sum After Pre decreament T1: "<<endl;
	sum=--t1 +t2;
	sum.show();
	cout<<"This is T1 after pre decreament: "<<endl;
	t1.show();

	return 0;

}

