#include<iostream>
using namespace std;

class sales
{
	private:
		float rec[3];
	public:
		sales();
		void getData();
		void putData();
};
sales::sales()
{
	for(int i=0;i<3;i++)
	{
		rec[i]=0;
	}
}
void sales::getData()
{
	cout<<"Enter three Data: ";
	for(int i=0;i<3;i++)
	{
		cin>>rec[i];
	}
}
void sales::putData()
{
	cout<<"The Record of month 1,2 and 3 respectively are: ";
	for(int i=0;i<3;i++)
	{
		cout<<rec[i]<<" , ";
	}
}

class publication
{
	protected:
		string title;
		float price;
	public:
		publication();
		void getData(string ,float);
		void putData();
};

publication::publication()
{
	title="";
	price=0;
}


void publication::getData(string t,float p)
{
	title = t;
	price = p;
}
void publication::putData()
{
	cout<<"Title: "<<title<<endl;
	cout<<"Price: "<<price<<endl;
}

class book:public publication,public sales
{
	protected:
		int pgcount;
	public:
		book();
		void getData(string ,float ,int );
		void putData();
};
book::book()
{
	title="";
	price=0;
	pgcount=0;
}
void book::getData(string t,float p,int pc)
{
	title = t;
	price = p;
	pgcount = pc;
}
void book::putData()
{
	cout<<"Title of Book: "<<title<<endl;
	cout<<"Price of Book: "<<price<<endl;
	cout<<"Number of Pages: "<<pgcount<<endl;
}
class tape:public publication,public sales
{
	private:
		float minuts;
	public:
		tape();
		void getData(string ,float ,float );
		void putData();
};
tape::tape()
{
	minuts=0;
	title="";
	price=0;
}
void tape::getData(string t,float p,float pt)
{
	title = t;
	price = p;
	minuts = pt;
}
void tape::putData()
{
	cout<<"Title of Tap: "<<title<<endl;
	cout<<"Price of Tap: "<<price<<endl;
	cout<<"Time of Tap: "<<minuts<<endl;
}

int main()
{
	publication Pub;
	book Bk;
	tape Tp;
	string title;
	float playingTime, price;
	int pageCount;
	
	cout<<"Enter data for publishing"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	Pub.getData(title, price);
	Pub.putData();
	cout<<endl<<endl;
	cout<<"Enter data for Book"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter the number of Pages : ";
	cin>>pageCount;
	
	Bk.getData(title, price, pageCount);
	Bk.putData();
	cout<<"Enter the record of last three months : "<<endl;

	Bk.getData(title,price,pageCount);
	Bk.putData();
	
	cout<<endl<<endl;
	cout<<"Enter data for Tape"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter playing Time : ";
	cin>>playingTime;
	Tp.getData(title, price, playingTime);
	Tp.putData();

	cout<<"Enter the record of last three months : "<<endl;
	
	Tp.getData(title, price, playingTime);
	Tp.putData();
	
	cout<<endl<<endl;
	
	return 0;

}

