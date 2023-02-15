#include<iostream>
using namespace std;

class Rectangle
{
	private:
		float hight,width;
	public:
		Rectangle()
		{
			hight=1;
			width=1;
		}
		void sethight(int h)
		{
			if(h>=0.0 && h<=20.0)
			{
				hight=h;
				
			}
			else
			{
				cout<<"Out of Range: "<<endl;
			}
		}
		void setwidth(int w)
		{
			if(w>=0.0 && w<=20.0)
			{
				width=w;
				
			}
			else
			{
				cout<<"Out of Range: "<<endl;
			}
		}
        int area()
        {
        	return hight*width;
		}
		int perimeter()
		{
			return 2*(hight+width);
		}
		
}; 
int main()
{
	Rectangle obj;
	int w,h;
	cout<<"Enter Width: ";
	cin>>w;
	obj.setwidth(w);
	cout<<"Enter Height: ";
	cin>>h;
	obj.sethight(h);
	cout<<"Area of Rectangle: ";
	cout<<obj.area()<<endl;
	cout<<"perimeter of Rectangle: ";
	cout<<obj.perimeter()<<endl;
	
}
