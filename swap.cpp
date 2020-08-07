#include<iostream.h>
#include<conio.h>
int main()
{
  int a,b;
  clrscr();
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"After swapping,value of a is "<<a<<" and value of b is "<<b;
  getch();
  return 0;

}
