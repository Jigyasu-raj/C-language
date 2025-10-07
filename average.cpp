#include<stdio.h>
#include<conio.h>
//Average of n natural number
int main()
{ int sum,i,N;
printf("Enter the number of N:-\n");
scanf("%d",&N);
printf("Sum of 1 to N natural number\n");
for(i=1;i<=N;i++){ sum=sum+i;
}

printf("%d",sum);
printf("\n Average of 1 to  N natural number:-\n");
printf("%f",(float)sum/10);
return 0;
}
