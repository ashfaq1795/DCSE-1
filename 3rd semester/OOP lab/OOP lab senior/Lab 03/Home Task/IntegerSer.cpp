#include<iostream>
using namespace std;


class IntegerSet
{
	private:
		bool Integer[50];
	public:
		IntegerSet();
		IntegerSet unionOfIntegerSets(IntegerSet a,IntegerSet b);
		IntegerSet intersectionOfIntegerSets(IntegerSet a,IntegerSet b);
		bool isEqualTo(IntegerSet a,IntegerSet b);
		void insertElement(int x);
		void deleteElement(int y);
		void showset();
		
};

IntegerSet::IntegerSet()
{
	for(int i=0;i<50;i++)
	{
		Integer[i]=0;
	}
}

void IntegerSet::insertElement(int x)
{
	if(x>=0 && x<50)
	{
		Integer[x]=1;
	}
}

IntegerSet IntegerSet::unionOfIntegerSets(IntegerSet a,IntegerSet b)
{
	IntegerSet third_set;
	for(int i=0;i<50;i++)
	{
		if(a.Integer[i]==1 || b.Integer[i]==1)
		{
			third_set.Integer[i]=1;
		}
	}
	return third_set;
}

IntegerSet IntegerSet::intersectionOfIntegerSets(IntegerSet a,IntegerSet b)
{
	IntegerSet third_set;
	for(int i=0;i<50;i++)
	{
		if(a.Integer[i]==1 && b.Integer[i]==1)
		third_set.Integer[i]=1;
	}
	return third_set;
}


void IntegerSet::deleteElement(int y)
{
	if(y>=0 && y<50)
	{
		Integer[y]=0;
	}
}

void IntegerSet::showset()
{
	for(int i=0;i<50;i++)
	{
		if(Integer[i]==1)
		{
			cout<<" "<<i;
		}
	}
	cout<<endl;
}

bool IntegerSet::isEqualTo(IntegerSet a,IntegerSet b)
{
    for(int i=0;i<50;i++)
    {
    	if(a.Integer[i]!=b.Integer[i])
    	{
    		return false;
		}
		else
		{
			return true;
		}
	}
}

int main()
{
	cout<<"Enter the Set element to finish enter -1: "<<endl;
	int element;
    IntegerSet a , b , c ,d;
    while(cin>>element,element!=-1)
    {
    	a.insertElement(element);
	}
	cout<<"Set A: ";
	a.showset();
	cout<<endl<<"Enter Second Set element: "<<endl;
	element=0;
	while(cin>>element,element!=-1)
	{
		b.insertElement(element);
	}
	cout<<"Set B: ";
	b.showset();
	
	cout<<endl<<"The Union of set A and set B is U: ";
	c=c.unionOfIntegerSets(a,b);
	c.showset();
	
	cout<<endl<<"The Intersection of set A and set B is I: ";
	d=d.intersectionOfIntegerSets(a,b);
	d.showset();
	
	if(c.isEqualTo(a,b))
	{
		cout<<endl<<"Set A and Set B are Equal: "<<endl;
	}
	else
	{
		cout<<endl<<"Set A and Set B are not Equal: "<<endl;
	}
	
	cout<<endl<<"IF you want to delete some element from Set A then enter it: "<<endl;
	element=0;
	while(cin>>element,element!=-1)
	{
    	a.deleteElement(element);
	}
	
	cout<<"After deleting some element from Set A: ";
	a.showset();
	
	cout<<endl<<"IF you want to delet some element from Set B then enter it: "<<endl;
	element=0;
	while(cin>>element,element!=-1)
	{
		b.deleteElement(element);
	}
	
	cout<<"After deleting some element from Set B: ";
	b.showset();

    cout<<endl<<"The Union of set A and set B is U: ";
	c=c.unionOfIntegerSets(a,b);
	c.showset();
	
	cout<<endl<<"The Intersection of set A and set B is I: ";
	d=d.intersectionOfIntegerSets(a,b);
	d.showset();
	return 0;
}
