#include<stdio.h>
#include<conio.h>
int main()
{ int N,i;
printf("Enter the number:-\n");
scanf("%d",&N);
printf("Odd number\n");
for(i=1;i<=N;i++)
{ if(i%2!=0)
{printf(" \n %d",i);
}
}
return 0;
}
