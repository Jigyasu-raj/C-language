#include<stdio.h>
#include<conio.h>
int main()
{ int N,i;
printf("Enter the number:-\n");
scanf("%d",&N);
printf("table of %d:- \n",N);
for(i=1;i<=10;i++)
{ printf(" \n%d*%d=%d",N,i,N*i);
}
return 0;
	
}
