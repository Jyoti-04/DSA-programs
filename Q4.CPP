/* WAP to search for a specific element in 1D array*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int array[10],size,item,pos,a;
 cout<<"Enter size of array\n";
 cin>>size;
 for(int i=0;i<size;i++)
 {
  cin>>array[i];
 }
 cout<<"Enter element to be searched\n";
 cin>>item;
 for(i=0;i<size;i++)
 {
  if(array[i]==item)
  {
   break;
  }
 }
 if(i==size)
 {
  cout<<"element not found";
 }
 else
 {
  cout<<"element found at position: "<<i+1;
 }
 getch();
 return 0;
}