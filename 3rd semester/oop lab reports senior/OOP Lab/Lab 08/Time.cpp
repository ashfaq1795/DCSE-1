#include<iostream>
using namespace std;

class Time
{
	private:
		int hours,minuts,seconds;
	public:
		Time():hours(0),minuts(0),seconds(0){}
		Time(int h,int m,int s);
		friend void show(Time t1);
		friend Time operator+(Time t1,Time t2);
		friend Time operator++(Time t1); //Pre Increamnet
		friend void operator--(Time t1); // Pre Decreamnet 
		friend void operator++(Time t1,int); // Post Increamnet 
		friend void operator--(Time t1,int); // post Decreamnet
};
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
Time operator+(Time t1,Time t2)
{
	Time sum;
	sum.hours=t1.hours+t2.hours;
	sum.minuts=t1.minuts+t2.minuts;
	sum.seconds=t1.seconds+t2.seconds;
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

Time operator++(Time t1)
{
	Time t;
	++t1.seconds;
	if(t1.seconds>=60)
	{
		t1.seconds-=60;
		t1.minuts++;
	}
	if(t1.minuts>=60)
	{
		t1.minuts-=60;
		t1.hours++;
	}
	cout<<"++S: "<<endl;
	return t;
}



void operator--(Time t1)
{
	--t1.seconds;
	
	if(t1.seconds<0)
	t1.seconds=0;
	else
	{
    	if(t1.seconds>=60)
    	{
		t1.seconds-=60;
		t1.minuts++;
    	}
	}
	
	
	if(t1.minuts<0)
	t1.minuts=0;
	else
	{
	if(t1.minuts>=60)
	{
		t1.minuts-=60;
		t1.hours++;
	}
	}	
	cout<<"S--"<<endl;
}

void operator++(Time t1,int)
{
    if (t1.seconds+1<60)
        t1.seconds++;
    else if (t1.minuts+1<60)
    {
        t1.seconds=0;
        t1.minuts++;
    }
    else if(t1.hours+1<12)
    {
        t1.seconds=0;
        t1.minuts=0; 
        t1.hours++;
    }
    else
        cout<<"Invalid Operation"<<endl;
cout<<"S++: "<<endl;
}

void operator--(Time t1,int)
{
	t1.seconds--;
	
	if(t1.seconds<0)
	t1 .seconds=0;
	else
	{
    	if(t1.seconds>=60)
    	{
		t1.seconds-=60;
		t1.minuts++;
    	}
	}
	
	
	if(t1.minuts<0)
	t1.minuts=0;
	else
	{
	if(t1.minuts>=60)
	{
		t1.minuts-=60;
		t1.hours++;
	}
	}	
	cout<<"S--: "<<endl;
}
void show(Time t1)
{
	cout<<t1.hours<<" : "<<t1.minuts<<" : "<<t1.seconds<<endl;
}


int main()
{
	Time t1(1,12,3),t2(4,50,70);
	show(t1);
	show(t2);
	Time sum=t1+t2;
	cout<<endl;
	cout<<"Sum of T1 and T2: "<<endl;
	show(sum);
	cout<<endl;

    ++t1;
   show(t1);
   
    --t1;
    show(t1);
    
    t1++;
    show(t1);
    
    t1--;
    show(t1);

	return 0;

}

