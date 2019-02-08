//General Truth Table

#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int x,y,z;
 cout<<"\nPrinting Truth Table:-\n";
 cout<<"X\tY\tZ\tXY+Z\n";
 for(x=0;x<=1;x++)
 for(y=0;y<=1;y++)
 for(z=0;z<=1;z++)
 {
  if((x*y)+z==2)
  cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<"1";
  else
  cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<(x*y)+z;
 }
