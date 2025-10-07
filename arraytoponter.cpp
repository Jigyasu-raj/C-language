#include<stdio.h>
#include<conio.h>
//ponter to  array
int main()
{ int a[5],i,n;
printf("Enter the no of element:-");
scanf("%d",&n);
printf("\n Enter array element:-");
for(i=0;i<n;i++)
{ scanf("%d",(a+i));

}
printf("Array element:-\n");
for(i=0;i<n;i++)
{ printf("\n %d",*(a+i));
}
return 0;
}
