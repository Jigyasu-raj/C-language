#include<stdio.h>
#include<conio.h>
//Assign operater
int main()
{ int x=50,y,z,a,b;
y+=x;
z-=x;
a*=x;
b/=x;
printf("%d",x);
printf("\n %d",y);//y=y+x
printf("\n %d",z);//z=z-x
printf("\n %d",a);//a=a*x
printf("\n %d",b);//b=b/x
return 0;
}
