/* WAP to check if a string is palindrome or not */

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 char string[20];
 cin.getline(string,20);
 for(int len=0;string[len]!='\0';len++);

 for(int i=0,j=len-1;i<len/2;i++,j--)
 {
  if(string[i]!=string[j])
  {
   break;
  }
 }
 if(i==len/2)
 cout<<"\nThe string is palindrome";
 else
 cout<<"\nThe string is not palindrome";

 getch();
 return 0;
}