#include <limits.h>
#include "matix.h"
#include "gtest/gtest.h"

TEST(AddTest2, Blah) {
 int matrixA[10][10];
 int matrixB[10][10];

 Matrix obj;
 cout<<"enter the first matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
     cin>>matrixA[i][j];
}
}

cout<<"enter the second matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
    cin>>matrixB[i][j];
}
}

obj.Add(2,2,matrixA,matrixB);
 int test[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 test[i][j] = 4;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(obj.res[i][j],test[i][j]);
 		
 }
 }
 
}

TEST(AddTest3, Blah) {
 int matrixA[10][10];
 int matrixB[10][10];

 Matrix obj;
 cout<<"enter the first matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
     cin>>matrixA[i][j];
}
}

cout<<"enter the second matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
    cin>>matrixB[i][j];
}
}

obj.Subtract(2,2,matrixA , matrixB);
 int test[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 test[i][j] = 0;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(obj.res[i][j],test[i][j]);
 		
 }
 }
 
}

TEST(AddTest4, Blah) {
 int matrixA[10][10];
 int matrixB[10][10];

 Matrix obj;
 
 cout<<"enter the first matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
     cin>>matrixA[i][j];
}
}

cout<<"enter the second matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
    cin>>matrixB[i][j];
}
}


obj.Multiply(2,2,2,2,matrixA,matrixB);
 int test[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 test[i][j] = 8;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(obj.res[i][j],test[i][j]);
 		
 }
 }
 
}



