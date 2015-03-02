#include <iostream>


using namespace std;

int result[10][10];
class Matrix{

public:
int res[10][10];
void Multiply(int rsizeA , int csizeA , int rsizeB , int csizeB , int A[10][10] , int B[10][10]);
void Add(int rsizeA , int csizeA , int A[10][10] , int B[10][10]);
void Subtract(int rsizeA , int csizeA , int A[10][10] , int B[10][10]);
};

void Matrix:: Multiply(int rsizeA , int csizeA , int rsizeB , int csizeB , int A[10][10] , int B[10][10])
{
	for(int i=0;i<rsizeA;i++)
	{
		for(int j=0;j<csizeB;j++)
		{
			result[i][j]=0;
			for(int k=0;k<csizeA;k++)
			{
				result[i][j]=result[i][j]+(A[i][k] * B[k][j]);
				res[i][j] = result[i][j];
			}
		}
	}
}

void Matrix:: Add(int rsizeA , int csizeA , int A[10][10] , int B[10][10])
{
	for(int i=0;i<rsizeA;i++)
	{
		for(int j=0;j<csizeA;j++)
		{
			result[i][j]=A[i][j] + B[i][j];
			res[i][j] = result[i][j];
		}
	}
}

void Matrix::Subtract(int rsizeA , int csizeA , int A[10][10] , int B[10][10])
{
	for(int i=0;i<rsizeA;i++)
	{
		for(int j=0;j<csizeA;j++)
		{
			result[i][j]=A[i][j] - B[i][j];
			res[i][j] = result[i][j];
		}
	}
}




