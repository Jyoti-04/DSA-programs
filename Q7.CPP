/* WAP to find number of vowels in a given line of text.*/

#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();
 char str[30];
 int count=0;
 cout<<"Enter the string: ";
 cin.getline(str,30);
 for(int i=0; str[i] !='\0';i++)
 {
  switch(str[i])
 {
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
  count++;
  break;
  }
 }
 cout<<"number of vowels:"<<count;
  getch();
  return 0;
 }

