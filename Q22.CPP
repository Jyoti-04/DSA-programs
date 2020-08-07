/* WAP to concatenate two strings.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 char str1[20],str2[20],str3[40];
 cout<<"Enter first string: ";
 cin.getline(str1,20);
 cout<<"Enter second string: ";
 cin.getline(str2,20);

 for(int i=0;str1[i]!='\0';i++)
  {
   str3[i]=str1[i];
  }
 for(int j=0;str2[j]!='\0';j++)
  {
   str3[i+j]=str2[j];
  }
  str3[i+j]='\0';
  cout<<"\nThe concatenated string is : "<<str3;
  getch();
  return 0;
 }