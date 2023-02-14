#include<iostream>
#include<string.h>
using namespace std;

class publication
{
	protected:
		char *title;
		float price;
	public:
	publication()
	{
	    title=NULL;
	    price=0;
	}
	publication(char *n,float p)
	{
		title=new char[strlen(n)+1];
		strcpy(title,n);
		price=p;
	}
	publication (const publication & obj)
	{
		title=new char;
		strcpy(title,obj.title);
		price=obj.price;
	}
	virtual void getdata()
	{
		
	}
    virtual void putData()
	{
	
	}
};
class book:public publication
{
	private:
		int pgcont;
	public:
		book()
		{
			title=NULL;
	        price=0;
	        pgcont=0;
		}
		book(char *n,float p,int pg)
		{
			title=new char[strlen(n)+1];
	    	strcpy(title,n);
		    price=p;
		    pgcont=pg;
		}
		book (const book & obj)
	    {
		    title=new char;
		    strcpy(title,obj.title);
		    price=obj.price;
		    pgcont=obj.pgcont;
	    }
		void getdata()
	    {
	    	cout<<"Book Data: "<<endl;
	    	cout<<"Enter title: ";
	    	cin>>title;
	    	cout<<"Enter price: ";
	    	cin>>price;
	    	cout<<"Number of Pages: ";
	    	cin>>pgcont;
	    }
	    void putData()
	    {
	    	cout<<endl<<"BOOK DATA: "<<endl<<endl;
		    cout<<"Book title: "<<title<<endl;
		    cout<<"Book price: "<<price<<endl;
		    cout<<"Number of pages: "<<pgcont<<endl<<endl<<endl;
	    }
		
	
};
class tape:public publication
{
	private:
		float time;
	public:
		tape()
		{
			title=NULL;
	        price=0;
	        time=0;
		}
		tape(char *n,float p,int t)
		{
			title=new char[strlen(n)+1];
	    	strcpy(title,n);
		    price=p;
		    time=t;
		}
		tape (const tape & obj)
	    {
		    title=new char;
		    strcpy(title,obj.title);
		    price=obj.price;
		    time=obj.time;
	    }
	    void getdata()
	    {
	    	cout<<"Enter tape data: "<<endl;
	    	cout<<"Enter title: ";
	    	cin>>title;
	    	cout<<"Enter price: ";
	    	cin>>price;
	    	cout<<"Enter time playing: ";
	    	cin>>time;
		}
		void putData()
	    {
	    	cout<<endl<<"TAPE DATA: "<<endl;
	    	cout<<"Title of tape: "<<title<<endl;
		    cout<<"Price of tape: "<<price<<endl;
		    cout<<"Time playing: "<<time<<endl;
	    }
};
int main()
{
	char arr[20];
	float price;
	int page;
	publication *p[2];
	p[0]=new book(arr,price,page);
	p[1]=new tape(arr,price,page);

	for(int i=0;i<2;i++)
	p[i]->getdata();

	for(int i=0;i<2;i++)
	p[i]->putData();
	
/*	book b(arr,price,page),bb(b);
	
	obj=&bb;
	obj->getdata();
	obj->putData();
	tape t(arr,price,page),tt(t);
	obj=&tt;
	obj->getdata();
	obj->putData();*/
	return 0;
}
