#include<iostream>
using namespace std;

class storage
{
	private:
		int bit,byt;
	public:
	    storage():byt(0),bit(0){};
		storage(int by,int bt):byt(by),bit(bt){};
		friend storage operator+(storage &s1,storage &s2);
		friend void operator+=(storage &s1,storage &s2);
		friend void operator++(storage &s1);
		friend void operator++(storage &s1,int);
		friend bool operator>(storage &s1,storage &s2);
		friend void show(storage &s);
		
};

storage operator+(storage &s1,storage &s2)
{
	storage s;
	s.bit=s1.bit+s2.bit;
	s.byt=s1.byt+s2.byt;
	if(s.bit>=8)
	{
		s.byt++;
		s.bit-=8;
	}
	return s;
}
void operator+=(storage &s1,storage &s2)
{
	s1.byt+=s2.byt;
	s1.bit+=s2.bit;
	if(s1.bit>=8)
	{
		s1.byt++;
		s1.bit-=8;
	}
}
void operator++(storage &s1)
{
    s1.bit++;
    cout<<"\nPre Incremnt Operator Overloaded\n";
}

void operator++(storage &ob, int)
{
    ++ob.bit;
    cout<<"\nPost Increment Operator Overloaded\n";
}

bool operator>(storage &s1,storage &s2)
{
	if(s1.bit>s2.bit && s1.byt>s2.byt)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
    
void show(storage &s)
{
	cout<<s.byt<<" "<<s.bit<<" "<<endl;
}
int main()
{
	storage s1(4,3),s2(12,4),s3;
	
	cout<<"S1 \t";
	show(s1);
	cout<<"S2 \t";
	show(s2);
	
	
	s3=s1+s2;
	cout<<"S1+S2 \t";
	show(s3);
	
	
	s1+=s2;
	cout<<"S1+=S2 \t";
    show(s1);
    
    
	++s1;
	cout<<"++S1 \t";
	show(s1);
	
	
	s1++;
	cout<<"S1++ \t";
	show(s1);
	if(s1>s2)
	{
		cout<<"\nS1>S2: "<<endl;
	}
	else
	{
		cout<<"\nS1<S2: "<<endl;
	}
	return 0;
}

