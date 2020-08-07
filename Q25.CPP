/* WAP to count number of LINES,WORDS,and CHAR in an array.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 char str[70];
 int line=0,word=0,ch=0;
 cout<<"Enter a string: "<<endl;
 cin.getline(str,70);

 for(int i=0;str[i]!='\0';i++)
 {
  if(str[i]=='.')
  {
   line++;
   word++;
  }
  else if(str[i]==' '||str[i]=='\t')
  {
   word++;
   ch++;
  }
  else ch++;
 }
  cout<<"\nCount of character: "<<ch;
  cout<<"\nCount of word: "<<word;
  cout<<"\nCount of line: "<<line;
  getch();
  return 0;
 }
