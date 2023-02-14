#include<iostream>
using namespace std;

class Matrix
{
	private:
		int matrix[3][3];
	public:
		Matrix();
		Matrix(int m[3][3]);
		void show();
		Matrix operator+(Matrix m);
		Matrix operator+=(Matrix m);
		Matrix operator*(Matrix m);
		bool operator==(Matrix m);
};

Matrix :: Matrix()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			matrix[i][j]=0;
		}
	}
};

Matrix::Matrix(int m[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			matrix[i][j]=m[i][j];
		}
	}
};
void Matrix::show()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<"     ";
		}
		cout<<endl;
	}
};

Matrix Matrix::operator+(Matrix m)
{
	Matrix res;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			res.matrix[i][j]=this->matrix[i][j] + m.matrix[i][j];
		}
	}
	return res;
};

Matrix Matrix::operator+=(Matrix m)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			this->matrix[i][j]+=m.matrix[i][j];
		}
	}
};

Matrix Matrix::operator*(Matrix m)
{
	Matrix res;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				res.matrix[i][j]+=this->matrix[i][k]*m.matrix[k][j];
			}
		}
	}
	return res;
};

bool Matrix::operator==(Matrix m)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(this->matrix[i][j]!=m.matrix[i][j])
			{
				return false;
			}
		}
	}
	return true;
};

int main()
{
	int m1[3][3],m2[3][3];
	cout<<"Enter the element of Matrix M1: ";
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>m1[i][j];
		}
	}
	cout<<"Enter the element of Matrix M2: ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>m2[i][j];
		}
	}
	Matrix matrix_1(m1),matrix_2(m2),result;
	
	cout<<"Matrix M1: "<<endl;
	matrix_1.show();
	cout<<endl<<endl;
	cout<<"Matrix M2: "<<endl;
	matrix_2.show();
	cout<<endl<<endl;
	result=matrix_1+matrix_2;
	cout<<"Sum of matrix_1 and matrix_2 Is: "<<endl;
	result.show();
	result=matrix_1*matrix_2;
	cout<<"Product of matrix_1 and matrix_2 Is: "<<endl;
	result.show();
	if(matrix_1==matrix_2)
	{
		cout<<"matrix_1==matrix_2: ";
	}
	else
	{
		cout<<"matrix_1!=matrix_2: ";
	}
	cout<<endl;
	matrix_1+=matrix_2;
	cout<<"matrix_1+=matrix_2 is equal to: "<<endl;
	matrix_1.show();
}
