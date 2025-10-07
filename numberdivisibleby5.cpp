#include<stdio.h>
#include<conio.h>
//if number is divisible by 5
int main()
{ int n;
printf("Enter the value of n:-\n");
scanf("%d",&n);
if(n%5==0)
{printf("Number is divisible by 5");
}
else{
	printf("Number is not divisible by 5");
}
return 0;
}
