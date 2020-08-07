/* WAP to find a no. of year in which no emp joined.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int emp[20],count=0;
 //cout<<"Enter employees joined in different years\n";
 for(int i=0;i<20;i++)
 {
 cout<<"Enter employees joined in year "<<i+1<<": ";
  cin>>emp[i];
  if(emp[i]==0)
  {
   count++;
  }
 }
 cout<<"no.of years when no employee joined the company is "<<count;
 getch();
 return 0;
}