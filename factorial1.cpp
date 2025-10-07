#include<stdio.h>
#include<conio.h>
int main()
{ int N,f=1;
printf("Enter the number:-\n");
scanf("%d",&N);
printf("Factorial of %d=",N);
while(N>0)
{ f=N*f;
N--;
}
printf("%d",f);
return 0;
}
