/* WAP to calculate grades of 4 students from 3 test scores.*/

#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();
 float marks[4][3],avg,sum;
 char grade[4];
 for(int i=0;i<4;i++)
 {
  sum = avg = 0;
  cout<<"\nEnter 3 scores of student "<<i+1<<": ";
  for(int j=0;j<3;j++)
  {
   cin>>marks[i][j];
   sum=sum + marks[i][j];
  }
  avg=sum/3;
  if(avg<45.0)
   grade[i]='D';
  else if(avg < 60.0)
   grade[i]='C';
  else if(avg<75.0)
   grade[i]='B';
  else
   grade[i]='A';
 }
 for(i=0;i<4;i++)
 {
  cout<<"Students: "<<i+1<<"\tTotal marks: "<<marks[i][0] + marks[i][1] +marks[i][2]
		  <<" \tGrade: "<<grade[i]<<endl;
 }
 getch();
 return 0;
}