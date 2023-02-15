#include<iostream>
using namespace std;

class Storage
{
	private:
		int byts,bits;
	public:
		Storage();
		Storage(int ,int );
		void show();
		Storage operator+(Storage d1);

		Storage operator+=(Storage d1);
        Storage operator++();
        Storage operator++(int);
		bool operator>(Storage d1);

};

Storage::Storage()
{
	byts=0;
	bits=0;
}



Storage::Storage(int by,int bi)
{
	if(bi>=8)
	{
		by++;
		bi-=8;
	}
	byts=by;
	bits=bi;
}

void Storage::show()
{
	cout<<byts<<" Bytes  "<<bits<<"   bits "<<endl;
}

Storage Storage::operator+(Storage d1)
{
	Storage sum;
	sum.byts=d1.byts+byts;
	sum.bits=d1.bits+bits;
	if(sum.bits>=8)
	{
	 	sum.byts++;
	 	sum.bits-=8;
	}
	return sum;
}

Storage Storage::operator+=(Storage d1)
{
	byts+=d1.byts;
	bits+=d1.bits;
	if(bits>=8)
	{
	 	byts++;
	 	bits-=8;
	}
}
bool Storage::operator>(Storage d1)
{
	if(byts>d1.byts)
	return true;
	else if(byts==d1.byts && bits>d1.bits)
	return true;
	else
	return false;
}

Storage Storage::operator++(int)
{
	Storage t=*this;
    if (bits+1<8)
        bits++;
    if(bits>=8)
	{
	 	byts++;
	 	bits-=8;
	}
    return t;

}
Storage Storage::operator++()
{
	Storage inc;
	inc.bits=++bits;
	if(inc.bits>=8)
	{
		byts++;
		bits-=8;
	}
	return *this;
}

int main()
{
	Storage n1(3,2),n2(1,3);
	cout<<"One: ";
	n1.show();
	cout<<"Two: ";
	n2.show();
    Storage sum;
	sum=n1+n2;
	cout<<"\nn1+n2: ";
    sum.show();
    
    
    cout<<"\nSum After Post increament in n1++: "<<endl;
	sum=n1++ +n2;
	sum.show();
	
	cout<<"\nn1++ is: ";
	n1.show();
    cout<<"\n++n1 ";
    sum=++n1 +n2;
	sum.show();
	
    n1.show();
	return 0;
}







