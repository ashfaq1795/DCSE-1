#include<iostream>
using namespace std;

class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date()
		{
			day=0;
			month=0;
			year=0;
		}
		void setData(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		int getDay()
		{
			return day;
		}
		int getMonth()
		{
			return month;
		}
		int getYear()
		{
			return year;
		}
		void displayDate()
		{
			cout<<"Day : "<<day<<" / Month : "<<month<<" / Year : "<<year<<endl;
		}
};

int main()
{
	int d,m,y;
	Date date;
	cout<<"Enter The Date: "<<endl;
	cout<<"Day: ";
	cin>>d;
	cout<<"Month: ";
	cin>>m;
	cout<<"Year: ";
	cin>>y;
	date.setData(d,m,y);
	date.displayDate();
	return 0;
}
