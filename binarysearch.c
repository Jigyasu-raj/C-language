#include<stdio.h>
#define max 50
int main()
{
    int n,i,element,mid,left,right,Array[max];
    printf("Enter size of array....");
    scanf("%d",&n);
    
    printf("Enter array elements.......");
    for(i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    printf("\nEnter element to be search");
    scanf("%d",&element);
    left=0;
    right=n-1;
    while(left<=right)
    {       mid=(left+right)/2;
        if(Array[mid]==element)
        {
            printf("%d found at index %d",element,i);
        }
        else if(Array[mid]<element)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return 0;

}