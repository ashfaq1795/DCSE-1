#include<iostream>
using namespace std;

class storage
{
	private:
		int bits,bytes;
	public:
		storage(int bt=0,int byt=0);
		friend storage operator+(storage &s1,storage &s2);
		friend void operator+=(storage &s1,storage &s2);
		friend void operator++(storage &s1);
		friend bool operator>(storage &s1,storage &s2);
		void show();
};

storage::storage(int bt,int byt)
{
	bits=bt;
	bytes=byt;
};

storage operator+(storage &s1,storage &s2)
{
	storage s;
	s.bytes=s1.bytes+s2.bytes;
	s.bits=s1.bits+s2.bits;
	if(s.bits>=8)
	{
		s.bytes++;
		s.bits-=8;
	}
	return s;
};

void operator+=(storage &s1,storage &s2)
{
	s1.bytes+=s2.bytes;
	s1.bits+=s2.bits;
	if(s1.bits>=8)
	{
		s1.bytes++;
		s1.bits-=8;
	}
};

void operator++(storage &s1)
{
	s1.bits++;
};

bool operator>(storage &s1,storage &s2)
{
		{
			if(s1.bytes > s2.bytes)
			{
				return true;
			}
			else if(s1.bytes == s2.bytes && s1.bits > s2.bits)
			{
				return true;
			}
			else 
			{
				return false;
			}
		}
};

void storage::show()
{
	cout<<bytes<<" Bytes "<<bits<<" Bits "<<endl;
}
int main()
{
	storage s1(4,5), s2(5,6), result;
	cout<<"S1: ";
	s1.show();
	cout<<"S2: ";
	s2.show();
	result = s1+s2;
	cout<<"S1 + s2: ";
	result.show();
	++s1;
	cout<<"++s1: ";
	s1.show();
	return 0;
}
