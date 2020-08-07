/*WAP to count the no. of emp earning more than rs  lakh per annum.
the monthly salary of 10 emp are given,*/

#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();
 double salary[10],count=0;
 for(int i=0;i<10;i++)
 {
  cout<<"enter the monthly salaries of 10 employees"<<i+1<<": ";
  cin>>salary[i];
  if((salary[i])*12>100000)
  count++;
 }
 cout<<"No. of employee earning more than 1 lakh : "<<count;
 getch();
 return 0;
}