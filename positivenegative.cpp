#include<stdio.h>
#include<conio.h>
//number positive negative
int main()
{ int n;
printf("Enter the number:-\n");
scanf("%d",&n);
if(n>0)
{printf("Number is  positive");
}
else{
	if(n==0)
	{ printf("Number is equal to 0");
	}
	else{printf("Number is negative");
	}
}
return 0;
}
