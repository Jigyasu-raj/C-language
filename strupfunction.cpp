#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ char str1[10];
 printf("Enter the name in lowercase\n");
 scanf("%s",&str1);
 printf("Name in uppercase %s\n",strupr(str1));
 return 0;
}
