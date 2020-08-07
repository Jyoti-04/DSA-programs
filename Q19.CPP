/* WAP to find row sum and col sum of matrices.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int A[4][4],row[4],col[4],j;
 cout<<"Enter your matrix:\n";
 for(int i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   cin>>A[i][j];
  }
 }
 for(i=0;i<4;i++)
 {
  row[i]=0;
  for(j=0;j<4;j++)
  {
   row[i]+=A[i][j];
  }
  cout<<"\nSum of row elements "<<i+1<<"="<<row[i];
 }
 for(j=0;j<4;j++)
 {
  col[j]=0;
  for(i=0;i<4;i++)
  {
   col[j]+=A[i][j];
  }
  cout<<"\nSum of column elements "<<j+1<<"="<<col[j];
 }
 getch();
 return 0;
}
