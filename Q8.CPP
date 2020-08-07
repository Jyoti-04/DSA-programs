/* WAP to reserve words of a string individually. */

#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 char string[80],word[80],k=0;
 cout<<"enter a string"<<endl;
 cin.getline(string,80);
 for(int len=0;string[len]!='\0';len++);
 for(int i=0;i<len;i++)
 {
  if(string[i] != ' ')
  {
   word[k]=string[i];
   k++;
  }
  else
  {
   while(k>0)
   {
    cout<<word[--k];
   }
   cout<<string[i];
  }
 }
 getch();
}