#include<stdio.h>
#include<conio.h>
int main()
{ int a,b,c;
printf("Enter the value of a ,b and c:-");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c)){printf("%d is greater ",a);

}
if((b>a)&&(b>c)){printf("%d is greater",b);
}
else{printf("%d is greater",c);
}


return 0;
}
