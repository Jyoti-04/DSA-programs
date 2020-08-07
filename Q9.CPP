/* WAP to convert a string to Upper camel casing.*/

#include<iostream.h>
#include<conio.h>
#include<ctype.h>

int main()
{
 clrscr();
 char string[30];
 cout<<"Enter the string:";
 cin.getline(string,30);
 string[0]=toupper(string[0]);
 cout<<"Updated string:";
 for(int i=0;string[i]!='\0';i++)
 {
  if(string[i]==' ')
   string[i+1] = toupper(string[i+1]);
   cout<<string[i];
 }
 getch();
 return 0;
}