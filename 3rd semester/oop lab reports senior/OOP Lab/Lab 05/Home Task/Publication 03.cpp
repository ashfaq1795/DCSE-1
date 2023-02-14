#include<iostream>
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

class disk:public publication
{
	private:
		enum size{small,larg};
	    int disksize;
	public:
		void getData(string ,float ,int );
		void putData();
};
void disk::getData(string t,float p,int s)
{
	title=t;
	price=p;
	if(s==3)
	{
		disksize=small;
	}
	else if(s==5)
	{
		disksize=larg;
	}
}
void disk::putData()
{
	cout<<"Title of the Disk: "<<title<<endl;
	cout<<"Price of the Disk: "<<price<<endl;
	if(disksize)
	{
		cout<<"Disk size is: 5-1/4 :"<<endl;
	}
	else
	{
		cout<<"Disk size is: 3-1/2 : "<<endl;
	}
}
int main()
{
	publication pb;
	book bk;
	tape tp;
	disk dk;
	string title;
	float price,tplaying;
	int size,pgcount;
	cout<<"Enter Data for Publication: "<<endl;
	cout<<"Enter Title: ";
	cin>>title;
	cout<<"Enter Price: ";
	cin>>price;
	
	cout<<endl<<endl;
	pb.getData(title,price);
	pb.putData();
	cout<<endl<<endl;
	
	cout<<"Enter Data for Book: "<<endl;
	cout<<"Enter Title: ";
	cin>>title;
	cout<<"Enter Price: ";
	cin>>price;
	cout<<"Enter Number of pages: ";
	cin>>pgcount;
	
	cout<<endl<<endl;
	bk.getData(title,price,pgcount);
	bk.putData();
	cout<<endl<<endl;
	
	cout<<"Enter Data for Tape: "<<endl;
	cout<<"Enter Title: ";
	cin>>title;
	cout<<"Enter Price: ";
	cin>>price;
	cout<<"Enter time playing: ";
	cin>>tplaying;
	
	cout<<endl<<endl;
	tp.getData(title,price,tplaying);
	tp.putData();
	cout<<endl<<endl;
	
	cout<<"Enter Title of Disk: ";
	cin>>title;
	cout<<"Enter Price: ";
	cin>>price;
	cout<<"Enter Size that Should be 3 OR 5: ";
	cin>>size;
	
	cout<<endl<<endl;
	dk.getData(title,price,size);
	dk.putData();
	cout<<endl<<endl;
	
	return 0;
}
