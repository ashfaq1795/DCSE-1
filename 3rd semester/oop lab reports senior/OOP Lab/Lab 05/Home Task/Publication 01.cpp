#include<iostream>
#include<string>
using namespace std;

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

class book:public publication
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
class tape:public publication
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
	
	cout<<"Enter Data for publishing"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	Pub.getData(title, price);
	Pub.putData();
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter Data for Book"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter the number of Pages : ";
	cin>>pageCount;
	Bk.getData(title, price, pageCount);
	Bk.putData();

	cout<<endl;
	cout<<endl;
	
	cout<<"Enter data for Tape"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter playing Time : ";
	cin>>playingTime;
	Tp.getData(title, price, playingTime);
	Tp.putData();
	
	cout<<endl;
	cout<<endl;
	
	return 0;
}

