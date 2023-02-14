#include<iostream>
#include<string>
using namespace std;

class Publication
{
private:
    string title;
    float price;
public:
    void getName()
    {
        cout<<"Enter Title: "; 
		cin>>title;
        cout<<"Enter Price: PKR "; 
		cin>>price;
    }

    void putName()
    {
        cout<<"\nTitle: "<<title;
        cout<<" Price: PKR "<<price;
    }

    virtual void getData() = 0;
    virtual void putData() = 0;
};

class Book : public Publication
{
private:
    int pages;
public:
    void getData()
    {
        Publication::getName();
        cout<<"Enter Pages: "; cin>>pages;
    }

    void putData()
    {
        Publication::putName();
        cout<<" Pages: "<<pages<<endl;
    }
};

class Tape : public Publication
{
private:
    float minutes;
public:
    void getData()
    {
        Publication::getName();
        cout<<"Enter Minutes: "; 
		cin>>minutes;
    }

    void putData()
    {
        Publication::putName();
        cout<<", Minutes: "<<minutes<<endl;
    }
};

int main()
{
    Publication *ptrPub[100];
    int n = 0;
    char choice;

    do
    {
        cout<<"Ente B/b for Book or T/t for Tape: "; 
		cin>>choice;
        if(choice == 'b'|| 'B')
        { 
		    ptrPub[n] = new Book; 
			ptrPub[n]->getData(); 
		}
        else
        { 
		    ptrPub[n] = new Tape; 
		    ptrPub[n]->getData(); 
		}
            n++; 
			cout<<"Enter y for another and n for No: "; 
			cin>>choice;
    } 
	while(choice == 'y');

    for(int i=0; i<n; i++)
        ptrPub[i]->putData();
    
    cout<<endl;
    return 0;
}
