#include<stdio.h>
#include<conio.h>
int main()
{ int a,b;
int *ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
printf("Enter the value of a and b :-\n");
scanf("%d %d",&a,&b);
printf("Before swapping\n");
printf("%d\n %d",*ptr1,*ptr2);
*ptr1=*ptr1+*ptr2;
*ptr2=*ptr1-*ptr2;
*ptr1=*ptr1-*ptr2;
printf("\n After  swappint \n");
printf("%d\n %d",*ptr1,*ptr2);
return 0;

}
