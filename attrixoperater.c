#include<stdio.h>
#include<conio.h>
//* opereter
int main()
{ int a;
int *ptr;
ptr=&a;
printf("Enter the value of a:-\n");
scanf("%d",&a);
printf("The value of a =%d",a);
printf("\n The address of a=%u",ptr);
return 0;
}
