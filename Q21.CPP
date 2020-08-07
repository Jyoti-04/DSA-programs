/* WAP to transpose a matrix.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int A[3][3],B[3][3],i,j;
 cout<<"Enter a matrix elements: "<<endl;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>A[i][j];
  }
 }
 cout<<"\n";
 cout<<"Transpose of matrix: "<<endl;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   B[i][j]=A[j][i];
   cout<<B[i][j]<<" ";
  }
  cout<<endl;
 }
 getch();
 return 0;
}
