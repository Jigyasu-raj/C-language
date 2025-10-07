#include<stdio.h>
#include<conio.h>
int main()
{ int a[5],i;
printf("Enter the array element:-\n");
for(i=0;i<5;i++)
{
printf("Enter a[%d]  ",i);
scanf("%d",&a[i]);

}
printf("printing array emenent:_\n");
for(i=0;i<5;i++){
printf("\n %d",a[i]);	
}

return 0;
}
