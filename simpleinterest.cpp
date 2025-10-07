#include<stdio.h>
#include<conio.h>
int main()
{ float p,r,t;
printf("Enter the principle,time and rate :-\n");
scanf("%f %f %f",&p,&r,&t);
printf("Simple interest=%f",(p*r*t)/100);
return 0;
}
