#include<stdio.h>
#include<conio.h>
int main()
{ int a,b,*p1,*p2;
p1=&a;
p2=&b;
printf("Enter the value of a and b \n");
scanf("%d %d",&a,&b);
printf("Sum=%d",*p1+*p2);
return 0;
}
