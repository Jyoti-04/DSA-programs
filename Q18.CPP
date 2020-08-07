/* WAP to MUL two matrix.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int A[4][4],B[4][4],mul[4][4],row,col,j,k;
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
 cout<<"Output:\n ";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   mul[i][j]=0;
   for(k=0;k<col;k++)
   {
   mul[i][j] += A[i][k]*B[k][j];
   }
  }
 }
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cout<<" "<<mul[i][j];
  }
  cout<<"\n";
 }
 getch();
 return 0;
}
