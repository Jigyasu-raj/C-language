#include<stdio.h>
#include<conio.h>
//program to swap to numbers
int main()
{ int n1,n2;
printf("Enter first no:-\n");
scanf("%d",&n1);
printf("Enter second no:-\n");
scanf("%d",&n2);
printf("Before swapping:-\n");
printf(" n1=%d",n1);
printf("\n n2=%d",n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("\n After swapping:-\n");
printf("n1=%d",n1);
printf("\n n2=%d",n2);

return 0;
}
