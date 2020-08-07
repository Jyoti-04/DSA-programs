/* WAP to sum elements below and above the main diagonal
of a matrix.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int A[3][3],Sum_below=0,Sum_above=0,j;
 cout<<"Enter a matrix: "<<endl;
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   cin>>A[i][j];
  }
 }
 cout<<"\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(i>j)
    Sum_below += A[i][j];
   else if(i<j)
    Sum_above += A[i][j];
   }
  }
  cout<<"Sum of element above the diagonal :"<<Sum_above<<endl;
  cout<<"Sum of element below the diagonal :"<<Sum_below<<endl;

  getch();
  return 0;
 }