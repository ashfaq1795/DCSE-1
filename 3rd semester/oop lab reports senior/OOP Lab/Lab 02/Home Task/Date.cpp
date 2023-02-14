#include<iostream>
using namespace std;

class Date
{
	private:
		int day,month,year;
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
		int getday()
		{
			return day;
		}
		int getmonth()
		{
			return month;
		}
		int getyear()
		{
			return year;
		}
		void show()
		{
			cout<<endl<<"Date: "<<day<<" / "<<month<<" / "<<year<<endl;
		}
};

int main()
{
	Date obj;
	int d,m,y;
	cout<<"Enter Day: ";
	cin>>d;
	cout<<"Enter Month: ";
	cin>>m;
	cout<<"Enter Year: ";
	cin>>y;
	obj.setData(d,m,y);
	obj.show();
	return 0;
}
