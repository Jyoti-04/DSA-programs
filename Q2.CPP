/*WAP to read prices of 10 items in an array and display sum,
productand average*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int price[10];
 float sum=0,prod=1,avg;
 for(int i=0;i<10;i++)
 {
  cout<<"\nEnter the price of products "<<i+1<<": ";
  cin>>price[i];
  sum+=price[i];
  prod*=price[i];
 }
 avg=sum/10;
 cout<<"\nSum of all prices: "<<sum;
 cout<<"\nProduct of all prices: "<<prod;
 cout<<"\nAverage of all prices: "<<avg;

 getch();
 return 0;
}