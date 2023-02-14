#include<iostream>
using namespace std;

class publication
{
	protected:
		string title;
		float price;
	public:
		void getData(string t,float p)
		{
			title=t;
			price=p;
		}
		void getData()
		{
			cout<<"Tile of the Book Is: "<<title<<endl;
			cout<<"Tile of the Book Is: "<<title<<endl;
		}
};
class book: public publication
{
	protected:
		int pageCount;
	public:
		void getData(string t,float p,int pc)
		{
			title=t;
			price=p;
			pageCount=pc;
		}
		void putData()
		{
			
			cout<<"Title of the book is : "<<title<<endl;
			cout<<"Price of the book is : "<<price;
			cout<<"The Number of pages are : "<<pageCount<<endl;
		}
};
class tape: public publication
{
	private:
		float timePlying;
	public:
		void getData(string t,float p,float tp)
		{
			title=t;
			price=p;
			timePlying=tp;
		}
		void putData()
		{
			cout<<"Title of the Tape is : "<<title<<endl;
			cout<<"Price of the tape is : "<<price<<endl;
			cout<<"Playing Time is : "<<timePlying<<endl;
		}
};
class disk: public publication
{
	private:
		enum sixe{small , large};
		sixe Csixe;
	public:
		void getData(string t,float p,int s)
		{
			title=t;
			price=p;
			if(s==3)
			{
				Csixe=small;
			}
			else if(s==5)
			{
				Csixe=large;
			}
		}
		void putData()
		{
			cout<<endl<<endl<<"Title of the Disk Is: "<<title<<endl;
			cout<<"Price of the Disk Is: "<<price<<endl;
			if(Csixe)
			{
				cout<<"Size of the Disk Is: 5-1/4 "<<endl;
			}
			else 
			{
				cout<<"Size of the Disk Is: 3-1/2 "<<endl;
			}
		}
};
int main()
{
	disk dsk;
	string title;
	float price;
	int size;
	/*
	publishing Pub;
	book Bk;
	tape Tp;
	
	cout<<"Enter data for publishing"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	Pub.getData(title, price);
	Pub.putData();
	cout<<"<------------------------------------------->"<<endl;
	
	cout<<"Enter data for Book"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter the number of Pages : ";
	cin>>pageCount;
	Bk.getData(title, price, pageCount);
	Bk.putData();
	cout<<"<------------------------------------------->"<<endl;
	
	cout<<"Enter data for Tape"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter playing Time : ";
	cin>>playingTime;
	Tp.getData(title, price, playingTime);
	Tp.putData();
	cout<<"<------------------------------------------->"<<endl;
	*/
	
	cout<<"Enter Data for Disk: "<<endl;
	cout<<"Enter the Title: ";
	cin>>title;
	cout<<"Enter the Price: ";
	cin>>price;
	cout<<"Enter the Size by Typing 3 or 5: "<<endl;
	do
	{
		cin>>size;
	}
	while(size!=3 && size!=5 );
	dsk.getData(title,price,size);
	dsk.putData();
	return 0;
}
