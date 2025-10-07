#include<stdio.h>
#include<conio.h>
int main()
{ int a[10],i,val,n;
printf("Enter the no of element :-\n");
scanf("%d",&n);
printf("Enter array element:-\n");
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
}
printf("Enter the data whitch we want to find\n");
scanf("%d",&val);
for(i=0;i<n;i++)
{ if(a[i]==val)
   { printf("Data is stored at location %d\n ",i+1);
}
if(i==n){ printf("Data is not fount");
}
}



return 0;
}
