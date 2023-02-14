#include<iostream>
using namespace std;

class time
{
	private:
		int hours,minuts,seconds;
	public:
		time();
		time(int h,int m,int s);
		void show();
		void add(time t1,time t2);
		
};
time::time()
{
	hours=0;
	minuts=0;
	seconds=0;
}
time::time(int h,int m,int s)
{
	if(s>0)
	{
		if(s>=60)
     	{
	    	s=s-60;
	    	m=m+1;
	    }
	}
	else
	s=0;
	if(m>0)
	{
		if(m>=60)
     	{
	    	m=m-60;
	    	h=h+1;
    	}
	}
	else 
	m=0;
	if(h>0 && h<24)
	{
		if(h>24)
    	{
	    	h=h-1;
	    }
	}
	else
	h=0;
	hours=h;
	minuts=m;
	seconds=s;
};

void time::show()
{
	cout<<hours<<" : "<<minuts<<" : "<<seconds<<endl;
};

void time::add(time t1,time t2)
{
	hours=t1.hours+t2.hours;
	minuts=t1.minuts+t2.minuts;
	seconds=t1.seconds+t2.seconds;
	if(seconds>=60)
    {
	   	seconds=seconds-60;
	   	minuts=minuts+1;
    }
	if(minuts>=60)
    {
	   	minuts=minuts-60;
	   	hours=hours+1;
    }
    if(hours>24)
    {
	   	hours=hours-1;
    }
	
};


int main()
{
	time t1(6,12,55),t2(3,14,27),t3;
	t3.add(t1,t2);
	cout<<"Time 1:   ";
	t1.show();
	cout<<"Time 2:   ";
	t2.show();
	cout<<endl<<endl;
	cout<<"Sum of Time 1 and Time 2:       ";
	t3.show();
}
