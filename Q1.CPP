/*WAP to read marks of 10 students and store them in an array*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 float marks[10];
 for(int i=0;i<10;i++)
 {
  cout<<"Enter the marks of students : #"<<i+1<<endl;
  cin >> marks[i];
 }
 cout<<"\n";
 for(i=0;i<10;i++)
 cout<<"Marks["<<i<<"]=" << marks[i]<<"\n";
 getch();
 return 0;
}