#include<stdio.h>
#include<conio.h>
//greater no of three no
int main()
{ int a,b,c;
printf("Enter the value of a ,b and c:-");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
	if(a>c){printf("%d is greater",a);
	}
	else{ printf("%d is greater",c);
		}
		}
		else{
if(b>a){if(b>c){
printf("%d is greater",b);
}
else{printf("%d is greater",c);
}

}
else{printf("%d is greater",a);
}		
}


return 0;
}
