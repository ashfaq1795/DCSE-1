#include<iostream>
using namespace std;

class time
{
	private:
		int hourse,minuts,seconds;
	public:
		time()
		{
			hourse=0;
			minuts=0;
		    seconds=0;
		}
		time(int hrs,int mnt,int sec)
		{
			hourse=hrs;
			minuts=mnt;
			seconds=sec;
		}
		void display()
		{
			cout<<hourse<<" : "<<minuts<<" : "<<seconds<<endl;
		}
		time operator+(time t);
		time operator++();
		time operator--();
};

time time::operator+(time t)
{
	time sum;
	sum.hourse=t.hourse+hourse;
	sum.minuts=t.minuts+minuts;
	sum.seconds=t.seconds+seconds;
	if(sum.seconds>=60)
	{
		sum.minuts++;
		sum.seconds-=60;
	}
	if(sum.minuts>=60)
	{
		sum.hourse++;
		sum.minuts-=60;
	}
	return sum;
};
time time::operator++()
{
	time inc;
	inc.seconds=++seconds;
	if(inc.seconds>=60)
	{
		inc.minuts++;
		inc.seconds-=60;
	}
	if(inc.minuts>=60)
	{
		inc.hourse++;
		inc.minuts-=60;
	}
	return inc;
};
time time::operator--()
{
	time dec;
	dec.seconds=--seconds;
	if(dec.seconds>=60)
	{
		dec.minuts++;
		dec.seconds-=60;
	}
	if(dec.minuts>=60)
	{
		dec.hourse++;
		dec.minuts-=60;
	}
	return dec;
};
int main()
{
	time t1(8,5,25),t2(3,33,40),sum;
    
/*	int sec,min,hrs;
	cout<<"Enter Time T1: "<<endl;
	cout<<"Seconds: ";
	cin>>sec;
	cout<<"Minuts: ";
	cin>>min;
	cout<<"Hours: ";
	cin>>hrs;
	time t1(hrs,min,sec);
	cout<<"Enter Time T2: "<<endl;
	cout<<"Seconds: ";
	cin>>sec;
	cout<<"Minuts: ";
	cin>>min;
	cout<<"Hours: ";
	cin>>hrs;
    time t2(hrs,min,sec);*/
	
	cout<<endl<<endl;
	cout<<"T1: ";
	t1.display();
	cout<<endl;
	cout<<"T2: ";
	t2.display();
	cout<<endl;
	time sum;
	sum=t1+t2;
	cout<<"Sum of T1 and T2 Is: ";
	sum.display();
	cout<<endl;
	++t1;
	cout<<"Seconds++ : ";
	t1.display();
	--t2;
	cout<<"Seconds-- : ";
	t2.display();
	return 0;
}
