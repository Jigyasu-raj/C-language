#include<stdio.h>
#include<conio.h>
//use of goto statement
int main()
{ int n,i=0;
printf("Enter the number :-\n");
scanf("%d",&n);
display:
	printf("\n sandeep kumar verma");
	i++;
	if(i<n){	goto display;
	}
	return 0;
}	


