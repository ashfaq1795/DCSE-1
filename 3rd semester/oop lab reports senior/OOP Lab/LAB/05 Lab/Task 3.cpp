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
		void putData()
		{
			cout<<"Title for publishing is : "<<title<<endl;
			cout<<"Price for publishing is: "<<price<<endl;
		}
};

class book: public publication
{
	protected:
		int pageCount;
	public:
		void getData(string t,float p,int PC)
		{
			title=t;
			price=p;
			pageCount=PC;
		}
		void putData()
		{
			cout<<"Title of the Book Is: "<<title<<endl;
			cout<<"Price of  the Book Is: "<<price<<endl;
			cout<<"The Number of Pages are: "<<pageCount<<endl;
		}
};

class tape:public publication
{
	private:
		float plyingTime;
	public:
		void getData(string t,float p,float PT)
		{
			title=t;
			price=p;
			plyingTime=PT;
		}
		void putData()
		{
			cout<<"Title of the Book Is: "<<title<<endl;
			cout<<"Price of the Book Is: "<<price<<endl;
			cout<<"Plying Time Is: "<<plyingTime<<endl;
		}
};
int main()
{
	publication pub;
	book BK;
	tape tp;
	string title;
	float price,plyingTime;
	int pagesCount;
	cout<<"Enter Data For Publishing: "<<endl;
	cout<<"Enter Title: ";
	cin>>title;
	cout<<"Enter Price: ";
	cin>>price;
	pub.getData(title,price);
	pub.putData();
	cout<<endl<<"!__________________________________________________!";
	cout<<endl<<endl;
	cout<<"Enter Data For the Book: "<<endl;
	cout<<"Enter The Title: ";
	cin>>title;
	cout<<"Enter The Price: ";
	cin>>price;
	cout<<"Enter Pages: ";
	cin>>pagesCount;
	BK.getData(title,price,pagesCount);
	BK.putData();
	cout<<endl<<"!__________________________________________________!";
	cout<<endl<<endl;
	cout<<"Enter Data For Tape: "<<endl;
	cout<<"Enter The Title: ";
	cin>>title;
	cout<<"Enter The Price: ";
	cin>>price;
	cout<<"Enter Plying Time: ";
	cin>>plyingTime;
	tp.getData(title,price,plyingTime);
	tp.putData();
	cout<<endl<<"!__________________________________________________!";
	cout<<endl<<endl;
	return 0;
}
