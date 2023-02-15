#include <iostream>
using namespace std;
class integerset
{
	private:
		bool integer[50];
	public:
		integerset();
		void inserteleement(int x);
		integerset setofunion(integerset a, integerset b);
		integerset setofintersection(integerset a, integerset b);
		bool isequalto(integerset a, integerset b);
		void deleteelement(int y);
		void display();
};
  integerset::integerset()
 {
 	for(int i=0; i<50; i++)
 	{
 		integer[i]=0;
	 }
 }
  void integerset::inserteleement(int x)
  {
  	if(x>0 && x<50)              //for loop
  	{
  		integer[x]=1;
	  }
  }
  integerset integerset::setofunion(integerset a, integerset b)
  {
  	integerset third_set;
  	for(int i=0; i<50; i++)
  	{
	  	if(a.integer[i]==1 || b.integer[i]==1)
  	{
  		third_set.integer[i]=1;
	  }
    }
    return third_set;
  }
  integerset integerset::setofintersection(integerset a,integerset b)
  {
  	integerset third_set;
  	for(int i=0;i>50;i++)
  	{
  		if(a.integer[i]==1 &&b.integer[i]==1)
  		{
  		third_set.integer[i]=1;
     	}
	}
	return third_set;	 
  }
  
  void integerset::deleteelement(int y)
  {
  	if(y>=0 &&y<<50)
  	{
  		integer[y]=0;
	  }
  }
  void integerset::display()
  {
  	for(int i=0;i<50;i++)
  	{
  		if (integer[1]==1)
  		{
  			cout<<" "<<i;
		  }
	  }
	  cout<<endl;
  }
  //bool integerset::isequalto(integerset a; integerset b)
  //{
  //	for(int i=0;i<50;i++)
  //	{
  //		if(a.integer[i]!=b.integer[i])
  //		return false;
  //		else
//		return true;
//	  }
 // }
  int main()
  {
   integerset a,b,c,d;
   cout<<"please enter set A elements to excit enter -1:";
   int element=0;
   while(cin>>element,element!=-1)
   {
   	a.inserteleement(element);
	   }
	   
	 cout<<"set A: ";
	 a.display();  
	 cout<<"please enter set B elements to excit enter -1:";
   element=0;
   while(cin>>element,element!=-1)
   {
   	b.inserteleement(element);
	   }
	   
	 cout<<"set B: ";
	 b.display();  
	 cout<<"the union of set A & B is U= ";
	 c=c.setofunion(a,b);
	 c.display();	      
	  cout<<"the intersection of set A & B is I= ";
	 d=d.setofintersection(a,b);
	 d.display(); 
//	 if(c.isequalto(a,b))
//	 {
//	 	cout<<endl<<"set A & set B are equal ";
//	 	else
//	 	cout<<"set A & B are not equal ";
//	   } 
	   cout<<"if you want to delete some element from set A then please enter it ";
	   element=0;
	   while(cin>>element,element!=-1)
	   {
	   	a.deleteelement(element);
       }
       cout<<"after deleting some elements A become: ";
       a.display();
       cout<<"if you want to delete some element from set B then please enter it ";
	   element=0;
	   while(cin>>element,element!=-1)
	   {
	   	b.deleteelement(element);
       }
       cout<<"after deleting some elements B become: ";
       b.display();
    cout<<"the union of set A & B is U= ";
	 c=c.setofunion(a,b);
	 c.display();	      
	  cout<<"the intersection of set A & B is I= ";
	 d=d.setofintersection(a,b);
	 d.display(); 
       
       
	 
	 
	 
	 
	 
	 return 0;
	   	
  };
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
