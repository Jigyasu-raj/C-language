#include<stdio.h>
#include<conio.h>
int main()
{ int n,max,i,a[10];
printf("Enter the no of  element:-");
scanf("%d",&n);
printf("Enter the array element:-\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{ if(max<a[i])
{ max=a[i];
}
}
printf("max element is %d",max);
return 0;

}
