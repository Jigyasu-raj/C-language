#include<stdio.h>
#include<conio.h>
//switch case statement
int main()
{ int n,i;
printf("Enter the number:-\n");
scanf("%d",&n);

switch(n)
	{case 1:
		printf("Monday");
		break;
		case 2:
			printf("Tuesday");
			break;
			case 3:
				printf("Wednesday");
		break;
		case 4:
			printf("Thursday");
			break;
			case 5:
				printf("Friday");
		break;
		case 6:
			printf("Friday");
			break;
			case 7:
				printf("Sunday");
				default:
					printf("Wrong choise");
			
}

return 0;
}
