#include<iostream>
using namespace std;

class date
{
	protected:
		int year,month,day;
	public:
		date()
		{
			year=0;
			month=0;
			day=0;
		}
		void setDate(int y,int m,int d)
		{
			year=y;
			month=m;
			day=d;
		}
		int getYear()
		{
			return year;
		}
		int getMonth()
		{
			return month;
		}
		int getDay()
		{
			return day;
		}
		void displayDate()
		{
			cout<<"Day: "<<day<<" / "<<"Month: "<<month<<" / "<<"Year: "<<year<<endl;
		}
};

class publication: public date
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
			cout<<"Title for Publishing Is: "<<title<<endl;
			cout<<"Price for Publishing Is: "<<price<<endl;
			displayDate();
		}
};

class publishing2 : public publication
{
	
};

class tape: public publishing2
{
	private:
		float plyingTime;
	public:
		void getData(string t,float p,float pt)
		{
			title=t;
			price=p;
			plyingTime=pt;
		}
		void putData()
		{
			cout<<"Title of the Tape Is: "<<title<<endl;
			cout<<"Price of the Tape Is: "<<price<<endl;
			cout<<"Playing Time is : "<<plyingTime<<endl;
			displayDate();
		}
};

class book: public publishing2
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
			cout<<"Title of the Book Is: "<<title<<endl;
			cout<<"Price of the Book Is: "<<price<<endl;
			cout<<"Pages Count: "<<pageCount<<endl;
			displayDate();
		}
};
int main()
{
	int pageCount;
	string title;
	float price,plyingTime;
	book Bk;
	tape Tp;
	date Dt;
	publication pub;
	int year,month,day;
	cout<<"Enter Data for Publishing: "<<endl;
	cout<<"Enter the Title: ";
	cin>>title;
	cout<<"Enter Price: ";
	cin>>price;
	cout<<"Enter the Date of Publishing: "<<endl;
	cout<<"Year: ";
	cin>>year;
	cout<<"Month: ";
	cin>>month;
	cout<<"Day: ";
	cin>>day;
	pub.setDate(year,month,day);
	pub.getData(title,price);
	pub.putData();
	cout<<endl<<"!____________________________________!"<<endl;
    
	cout<<"Enter data for Book"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter the number of Pages : ";
	cin>>pageCount;
	cout<<"Enter the date for book " <<endl;
	cout<<"Year : ";
	cin>>year;
	cout<<"Month : ";
	cin>>month;
	cout<<"Day : ";
	cin>>day;
	Bk.setDate(year,month,day);
	Bk.getData(title,price,pageCount);
	Bk.putData();
	cout<<endl<<"!____________________________________!"<<endl;
		
	cout<<"Enter data for Tape"<<endl;
	cout<<"Enter the title : ";
	cin>>title;
	cout<<"Enter price : ";
	cin>>price;
	cout<<"Enter playing Time : ";
	cin>>plyingTime;
	cout<<"Enter the date for tape "<<endl;
	cout<<"Year : ";
	cin>>year;
	cout<<"Month : ";
	cin>>month;
	cout<<"Day : ";
	cin>>day;
	Tp.setDate(year,month,day);
	Tp.getData(title,price,plyingTime);
	Tp.putData();
	cout<<endl<<"!____________________________________!"<<endl;
	return 0;
}
