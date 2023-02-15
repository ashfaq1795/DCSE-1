#include<iostream>
using namespace std;
class Time
{
	private:
		int hourse,minuts,second;
	public:
		Time();
		Time(int h,int m,int s);
		void displaytime();
		void addtime(Time t2,Time t3);
};

Time::Time()
{
	hourse=0;
	minuts=0;
	second=0;
}

Time:: Time(int h,int m,int s)
{
	if(s>=60)
	{
		s=s-60;
		m=m+1;
	}
	if(m>=60)
	{
		m=m-60;
		h=h+1;
	}
	if(h>12)
	{
		h=h-1;
	}
	hourse=h;
	minuts=m;
	second=s;
}
void Time:: displaytime()
{
	cout<<hourse<<" : "<<minuts<<" : "<<second<<endl;
}
void Time::addtime(Time t2,Time t3)
{
	hourse=t2.hourse + t3.hourse;
	minuts=t2.minuts + t3.minuts;
	second=t2.second + t3.second;
	if(second>=60)
	{
		second=second-60;
		minuts=minuts+1;
	}
	if(minuts>=60)
	{
		minuts=minuts-60;
		hourse=hourse-1;
	}
	if(hourse>12)
	{
		hourse=hourse-1;
	}
}


int main()
{
	Time t1,t2(4, 10, 50),t3(6, 15, 37);
	t1.addtime(t2,t3);
	cout<<"Time T1 is: ";
	t2.displaytime();
	cout<<"Time T2 is: ";
	t3.displaytime();
	cout<<"Sum of Time T1 and T2 is : ";
	t1.displaytime();
	return 0;
}



