#include<stdio.h>

int Addition(int a, int b) {
	return a+b;
}
int Subtraction(int a, int b) {
	return a-b;
}
int Multiplication(int a, int b) {
	return a*b;
}
int Division(int a, int b) {
	return a/b;
}
int Moduls(int a, int b) {
	return a%b;
}


main() {
	
	int n,a,b,ans;
	
	do {
		
		printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %\n");
	printf("Press 0 for the exit\n");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&n);
	
	switch(n) {
		
		case 1 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			ans = Addition(a,b);
			printf("Addition of %d and %d is %d\n\n",a,b,ans);
			break;
			
		case 2 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			ans = Subtraction(a,b);
			printf("Subtraction of %d and %d is %d\n\n",a,b,ans);
			break;
			
		case 3 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			ans = Multiplication(a,b);
			printf("Multiplication of %d and %d is %d\n\n",a,b,ans);
			break;
			
		case 4 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			ans = Division(a,b);
			printf("Division of %d and %d is %d\n\n",a,b,ans);
			break;
			
		case 5 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			ans = Moduls(a,b);
			printf("Moduls of %d and %d is %d",a,b,ans);
			break;
			
		default :
			(n!=0) 
				? printf("\nInvalie Number. Please Try again\n\n") 
				:printf("Exit...");
			
	}
		
	}while(n>0);
}
