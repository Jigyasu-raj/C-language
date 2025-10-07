#include<stdio.h>
#include<conio.h>
//print natural numbers
int main()
{ int N,i=0;
printf("Enter the Number:-\n");
scanf("%d",&N);
printf("Natural numbers\n");
do{
	printf("\n %d",i);
	i++;
}
while(i<=N);
}
