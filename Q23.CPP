/* WAP to delete duplicate elements in a vector.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int size,A[30];
 cout<<"Enter no. of elements: ";
 cin>>size;
 cout<<"\nEnter elements of an array\n";
 for(int i=0;i<size;i++)
   cin>>A[i];

 for(i=0;i<size;++i)
 {
  for(int j=i+1;j<size;j++)
  {
   if(A[i]==A[j])
   { size=size-1;
    for(int k=j;k<size;k++)
     A[k]=A[k+1];
   }
  }
 }
  cout<<"\nElements of array after deletion: ";
  for(i=0;i<size;i++)
    cout<<A[i]<<" ";

  getch();
  return 0;
 }