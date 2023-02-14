#include<iostream>
using namespace std;

class matrix
{
	private:
		int arr[3][3];
	public:
		matrix();
		matrix(int new_arr[3][3]);
		void add_Matrix(matrix m1,matrix m2);
		void multi_Matrix(matrix m1,matrix m2);
		void show();
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

matrix::matrix(int new_arr[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr[i][j]=new_arr[i][j];
		}
	}
}

void matrix::add_Matrix(matrix m1,matrix m2)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr[i][j]=m1.arr[i][j]+m2.arr[i][j];
		}
	}
}

void matrix::multi_Matrix(matrix m1,matrix m2)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr[i][j]=0;
			for(int k=0;k<3;k++)
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
			return false;
		}
	}
	return true;
}
void matrix::show()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
}
int main()
{
	int a[3][3],b[3][3];
	cout<<"Matrx one: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Matrx two: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	matrix obj,m1(a),m2(b);
	cout<<"Firste Matrix: "<<endl;
	m1.show();
	cout<<"Second Matrix: "<<endl;
	m2.show();
	cout<<"Addition of M1 and M2 Is: "<<endl;
	obj.add_Matrix(m1,m2);
	obj.show();
	obj.multi_Matrix(m1,m2);
	cout<<"-----------------------------------"<<endl;
	cout<<"Multiplication of M1 and M2 Is: "<<endl;
	obj.show();
	cout<<"-----------------------------------"<<endl;
	if(obj.isEqual(m1,m2))
	{
		cout<<"M1 and M2 are Equal: "<<endl;
	}
	else
	{
		cout<<"M1 and M2 are Not Equal: "<<endl;
	}
	return 0;
}


