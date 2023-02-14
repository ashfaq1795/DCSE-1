#include<iostream>
using namespace std;

class sales
{
	private:
		float arr[3];
	public:
		sales()
		{
			for(int i=0;i<3;i++)
			{
				arr[i]=0;
			}
		}
		void getData()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"Enter For Month "<<i+1<<": ";
				cin>>arr[i];
			}
		}
		void putData()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"The Record of Month "<<i+1<<" is: "<<arr[i]<<endl;
			}
		}
};

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
		void putData()
		{
			cout<<"\nTile for Publishing Is: "<<title<<endl;
			cout<<"Price for Publishing Is: "<<price<<endl;
	    }
};

class book: public publication,public sales
{
	protected:
		int pageCount;
	public:
		void getData(string t,float p,int pc)
		{
			title=t;
			price=p;
			pageCount=p;
		}
		void putData()
		{
			cout<<"Title of the Book Is: "<<title<<endl;
			cout<<"Price of the Book Is: "<<price<<endl;
			cout<<"Number of Pages In the Book are: "<<pageCount<<endl;
		}
};
class tape:public publication,public sales
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
			cout<<"Title of the Tape Is: "<<title<<endl;
			cout<<"Price of the Tape Is: "<<price<<endl;
			cout<<"Time Plying Is: "<<timePlying<<endl;
		}
};
int main()
{
	publication pub;
	tape Tp;
	book Bk;
	string title;
	float timePlying,price;
	int pageCount;
	cout<<"Enter Data for Publishing: "<<endl;
	cout<<"Enter the Title: ";
	cin>>title;
	cout<<"Enter the Price: ";
	cin>>price;
	pub.getData(title,price);
	pub.putData();
	cout<<endl<<"!_____________________________________!"<<endl;
	cout<<"\nEnter Data for Book: "<<endl;
	cout<<"Enter the Title: ";
	cin>>title;
	cout<<"Enter the Price: ";
	cin>>price;
	cout<<"Enter Number of Pages: ";
	cin>>pageCount;
	Bk.getData(title,price,pageCount);
	Bk.putData();
	
	cout<<"\nEnter the Record of Last three Monht: "<<endl;
	Bk.sales::getData();
	Bk.sales::putData();
	cout<<endl<<"!_____________________________________!"<<endl;
	cout<<"Enter Data for Tape: "<<endl;
	cout<<"Enter the Title: ";
	cin>>title;
	cout<<"Enter the Price: ";
	cin>>price;
	cout<<"Enter Plying Time: ";
	cin>>timePlying;
	Tp.getData(title,price,timePlying);
	Tp.putData();
	cout<<"\nEnter the Record of Last three Monht: "<<endl;
	Tp.sales::getData();
	Tp.sales::putData();
	cout<<endl<<"!_____________________________________!"<<endl;
	return 0;
}
