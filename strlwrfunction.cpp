#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ char str1[10];
printf("Enter the name in uppercase\n");
scanf("%s",&str1);
printf("Name in lowercase %s",strlwr(str1));
return 0;
}
