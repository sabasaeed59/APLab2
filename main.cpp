#include <iostream>
#include "matix.h"

using namespace std;


int main()
{
int l,m,z,n;
int matrixA[10][10];
int matrixB[10][10];


cout<<"enter the size of first matrix"<<endl;
cin>>l>>m;
cout<<"enter the size of second matrix"<<endl;
cin>>z>>n;


cout<<"enter the first matrix"<<endl;
for(int i=0;i<l;i++)
{
for(int j=0;j<m;j++)
{
     cin>>matrixA[i][j];
}
}

cout<<"enter the second matrix"<<endl;
for(int i=0;i<z;i++)
{
for(int j=0;j<n;j++)
{
    cin>>matrixB[i][j];
}
}

Matrix obj;
int option;
cout << endl << "Enter 1 for addition" << endl << "Enter 2 for subtraction" << endl << "Enter 3 for multiplication" << endl;
cin >> option;

if(option == 1)
{
if(l==z && m==n)
obj.Add(l,m,matrixA,matrixB);
else 
cout << "Size of matrices should be same for addition" << endl;
}
else if (option == 2)
{
if(l==z && m==n)
obj.Subtract(l , m , matrixA , matrixB);
else 
cout << "Size of matrices should be same for subtraction" << endl;
}
else if (option == 3)
{
obj.Multiply(l , m , z , n , matrixA , matrixB);
}
else
{
cout << "wrong input" << endl;
}

cout<<"The resulting matrix is"<<endl;
for(int i=0;i<l;i++){
for(int j=0;j<n;j++){
cout<<result[i][j]<<" ";
}
cout<<endl;
}


return 0;
}

