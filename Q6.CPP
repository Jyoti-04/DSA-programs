/* WAP to replace every space in a string with a hyphen.*/

#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();
 char str[60];
 cout<<"Enter the sring:";
 cin.getline(str,60);
 for(int i=0;str[i]!='\0';i++)
 {
  if(str[i]== ' ')
  {
   str[i]='-';
  }
 }
 cout<<str<<endl;
 getch();
 return 0;
}



