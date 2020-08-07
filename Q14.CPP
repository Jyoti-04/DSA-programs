/*WAP to find smallest and largest element in a vector.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 float arr[30],max,min,k;
 cout<<"Enter the size of array:";
 cin>>k;
 cout<<"enter the elements of array:\n";
 for(int i=0;i<k;i++)
 cin>>arr[i];
 max=arr[0];
 for(i=0;i<k;i++)
 {
  if(max<arr[i])
  max=arr[i];
 }
 min=arr[0];
 for(i=0;i<k;i++)
 {
  if(min>arr[i])
  min=arr[i];
 }
 cout<<"\nLargest element : "<<max;
 cout<<"\nSmallest element : "<<min;
 getch();
 return 0;
}