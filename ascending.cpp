#include<stdio.h>
#include<conio.h>
int main()
{ int i,j,a[10],n,temp=0;

printf("Enter the no of element:-\n");
scanf("%d",&n);
printf("Enter the array element:-\n");
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);

}
printf("Array element:-\n");
for(i=0;i<n;i++)
{ printf("%d\n",a[i]);

}
printf("Array element in ascending order :-\n");
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
			if(a[i]>a[j])
	{ temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}

	}
		printf("%d\n ",a[i]);
}
	
return 0;
}
