/* WAP to find the length of a string without using library function.*/

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 char str[50];
 cout<<"Enter a string"<<endl;
 cin.getline(str,50);
 cout<<"Length of a string: ";
 for(int len=0;str[len]!='\0';len++);
 cout<<len;
 getch();
 return 0;
}