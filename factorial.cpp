#include<stdio.h>
#include<conio.h>
//factorial
int main()
{ int N,f=1, i;
printf("Enter the number:-\n");
scanf("%d",&N);
for(i=1;i<=N;i++)
{ f=f*i;
} 
printf("Factorial of %d =%d",N,f);
return 0;
}
