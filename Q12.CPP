/* WAP to print squares of diagonals elements of a given matrix [p][q].*/

#include<iostream.h>
#include<conio.h>
int main()
{
 int i,j,a[2][2];
 clrscr();
 cout<<"Write elements of a matrix: ";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"Square of matrix a: "<<endl;
 for(i=0;i<2;i++)
 {
  for(j=i;j<=i;j++)
  {
  cout<<a[i][j]*a[i][j]<<endl;
  }
 }
 getch();
 return 0;
}