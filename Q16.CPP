/* WAP to ADD to matrix.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int A[4][4],B[4][4],sum[4][4],row,col,j;
 cout<<"Enter the no. of rows\n";
 cin>>row;
 cout<<"Enter the no. of column\n";
 cin>>col;
 cout<<"Enter elements of matrix A:\n";
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   cin>>A[i][j];
  }
 }
 cout<<"Enter elements of matrix B:\n";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cin>>B[i][j];
  }
 }
 cout<<"Output: ";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   sum[i][j]=A[i][j]+B[i][j];
   cout<<sum[i][j]<<" ";
  }
 }
 getch();
 return 0;
}