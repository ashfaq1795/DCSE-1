#include<iostream>
using namespace std;

class decending
{
	private:
		int i,j,temp,arr[5];
	public:
		decending()
		{
	
		}
		void getvalues()
		{
 			for(i=0;i<5;i++)
           	{
	         	cin>>arr[i];
         	}
		}
		void arrange()
		{
		for(i=0;i<5;i++)
	    {
	        for(j=0;j<4;j++)
	        {
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
		        arr[j]=arr[j+1];
	            arr[j+1]=temp;
			}
		    }
	    }
		}
		void display()
		{
			for(i=0;i<5;i++)
	        {
	         	cout<<" "<<arr[i];
         	}
		}
	
};

int main()
{
	decending obj;
	obj.getvalues();
	obj.arrange();
	obj.display();
	return 0;
	
}
