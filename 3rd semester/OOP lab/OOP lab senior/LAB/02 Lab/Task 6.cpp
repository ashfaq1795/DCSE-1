#include<iostream>
using namespace std;

class rectangle
{
 	private:
 		float length;
 		float width;
 		float area;
 		float perimeter;
 	public:
 		rectangle()
 		{
 			length=1;
 			width=1;
		}
		void setValue(int len,int wid)
		{
			if(len>=0.0 && len<=20.0 && wid>=0.0 && wid<=20.0)
			{
				length=len;
				width=wid;
			}
			else
			{
				cout<<"You are goin out of Range: ";
			}
		}
			float getArea()
			{
				area=length*width;
				return area;
			}
			float getPerimeter()
			{
				perimeter=(length+width)*2;
				return perimeter;
			}

};

int main()
{
	rectangle rec;
	float length,width;
	cout<<"Enter Length of Rec: ";
	cin>>length;
	cout<<"Enter Width of Rec: ";
	cin>>width;
	rec.setValue(length,width);
	cout<<"\nArea of Rectangle is: "<<rec.getArea()<<endl;
	cout<<"Perimeter of Rectangle is: "<<rec.getPerimeter()<<endl;
	return 0;
}
