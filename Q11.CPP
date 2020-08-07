/* WAP to read and check the equality of 2 matrices.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int a[3][3],b[3][3],row,col;
 cout<<"ENTER FIRST MATRIX ROW WISE:"<<endl;
  for(row=0;row<3;row++)
  {
   for(col=0;col<3;col++)
   {
    cin>>a[row][col];
   }
  }
  cout<<"ENTER SECOND MATRIX ROW WISE:"<<endl;
  for(row=0;row<3;row++)
  {
   for(col=0;col<3;col++)
   {
    cin>>b[row][col];
   }
  }
  int flag=0;
  for(row=0;row<3;row++)
  {
   for(col=0;col<3;col++)
   if(a[row][col] != b[row][col])
     flag=1;

    if(flag==1)
    break;
  }
  if(flag)
    cout<<"\n Matrix are unequal";
  else
    cout<<"\n Matrix are equal";


   getch();
   return 0;
}