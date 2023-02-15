#include<iostream>
using namespace std;
class matrix
{
	private:
		int arr[3][3];
	public:
		matrix();
		matrix(int arr_new[3][3]);
		void addMatrix(matrix m1,matrix m2);
		void multiplyMatrix(matrix m1,matrix m2);
		void displayMatrix();
		bool isEqual(matrix m1,matrix m2);
};

matrix::matrix()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr[i][j]=0;
		}
	}
}
matrix::matrix(int arr_new[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr[i][j]=arr_new[i][j];
		}
	}
}

void matrix::addMatrix(matrix m1,matrix m2)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr[i][j]=m1.arr[i][j]+m2.arr[i][j];
		}
	}
}
void matrix::multiplyMatrix(matrix m1,matrix m2)
{
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				arr[i][j]+=m1.arr[i][k]*m2.arr[k][j];
			}
		}
	}
}
bool matrix::isEqual(matrix m1,matrix m2)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(m1.arr[i][j]!=m2.arr[i][j])
			{
				return false;
			}
		}
	}
	return true;
}
void matrix::displayMatrix()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
}

int main()
{
	int a[3][3],b[3][3],mult[3][3],i,j,k;
	
	cout<<"Enter Matrix 1 Element: ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" A "<<i+1<<j+1<<" ";
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter Matrix 2 Element: ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" B "<<i+1<<j+1<<" ";
			cin>>b[i][j];
		}
	}
	
	matrix m1,m2(a),m3(b);
	
	cout<<"Matrix 1 Is: "<<endl;
	m2.displayMatrix();
	cout<<"Matrix 2 Is: "<<endl;
	m3.displayMatrix();
	m1.addMatrix(m2,m3);
	cout<<"Sum of Matrix 1 and Matrix Is: "<<endl;
	m1.displayMatrix();
	
	m1.multiplyMatrix(m2,m3);
	cout<<"Product of Matrix 1 and Matrix Is: "<<endl;
	m1.displayMatrix();
	
	if(m1.isEqual(m2,m3))
	{
		cout<<"Matrix 1 and 2 are Equal: "<<endl;
	}
	else
	{
		cout<<"Matrix 1 and 2 are Not Equal: "<<endl;
	}
	
	return 0;
}
