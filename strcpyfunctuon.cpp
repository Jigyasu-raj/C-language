#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ char str1[10],str2[10];

printf("Enter the first name\n");
scanf("%s",&str1);
printf("Enter the second name\n");
scanf("%s",&str2);
strcat(str1,str2);
printf("full name is %s\n ",str1);

return 0;
}
