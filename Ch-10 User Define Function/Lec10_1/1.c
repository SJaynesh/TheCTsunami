#include<stdio.h>

int Cube() {
	int number,cube;
	
	printf("Enter any number :");
	scanf("%d",&number);
	
	return cube = number * number * number;
}
main() {
	
	int ans = Cube();
	
	printf("\n\tCube is : %d",ans);
}
