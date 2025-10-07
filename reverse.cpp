#include<stdio.h>
#include<conio.h>
//program to reverse number
int main()
{ int n,rem,rev=0;
printf("Enter the value of n=\n ");
scanf("%d",&n);
while(n>0){ rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
printf("Reverse=%d",rev);
return 0;
}
