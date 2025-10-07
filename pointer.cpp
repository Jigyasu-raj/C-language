#include<stdio.h>
#include<conio.h>
//pointer
int main()
{ int a=5;
int *ptr;
ptr=&a;
printf("The value of a is %d",a);
printf("\n The address of a is %u",ptr);
printf("\n the value of a is %d",*(&a));
printf("\n the Address of a is %u",&a);
return 0;
}
