// printing values and address of pointers

#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 int x=10,y=20;
 int *ptr1,*ptr2;
 ptr1=&x;
 ptr2=&y;
 cout<<"\nPointer one is pointing to the value:"<<*ptr1<<
 "\nAnd storing the address:"<<ptr1;
 cout<<"\n\nPointer second is pointing to the value:"<<*ptr2<<
 "\nAnd storing the address:"<<ptr2;
 cout<<"\n\nAddition of values:"<<*ptr1 + *ptr2;
 cout<<"\nAddition of addresses is not Possible";
 cout<<"\n\nMultiplication of Values:"<<*ptr1 * *ptr2;
 cout<<"\nMultiplicatio of Addressesis not possible";

 cout<<"\n\nDivision of values:"<<*ptr2 / *ptr1;
 cout<<"\nDivision of Addresses is not  possible";
 cout<<"\n\nIncrementing values:"<< ++ (*ptr1)<<"\t"<< ++(*ptr2);
 cout<<"\nDecrementing values:"<< -- (*ptr1)<<"\t"<< -- (*ptr2);

 cout<<"\n\nIncrementing  Addresses:"<< ++ptr1<<"\t"<< ++ptr2;
 cout<<"\nDecrementing Addresses:"<< --ptr1<<"\t"<< --ptr2;
 getch();
 }
