#include<stdio.h>
#include<conio.h>
int main()
{ int a[10],i,n,sum=0,aveg;
printf("Enter the no of element:-\n");
scanf("%d",&n);
printf("enter array element:-\n");
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{ sum=sum+a[i];
}
printf("sum of array=%d\n",sum);
printf("Average of array=%f\n",(float)sum/n);

return 0;
}
