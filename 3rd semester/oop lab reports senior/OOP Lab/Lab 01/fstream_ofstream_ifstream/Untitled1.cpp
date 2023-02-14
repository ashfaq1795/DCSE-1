#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[10];
	ofstream file("bacha.txt");
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	if(!file.is_open())
	{
		cout<<"Not Open "<<endl;
	}
	else
	{
		for(int i=0;i<10;i++)
		{
			file<<arr[i]<<endl;
		}
	}
	cout<<endl<<endl;
	
	ifstream fileread;
	fileread.open("bacha.txt");
	if(!fileread.is_open())
	{
		cout<<"Error: ";
	}
	else
	{
		string line;
		while(fileread.good())
		{
			getline(fileread,line);
			cout<<line<<" ";
		}
	}
	return 0;
}
