#include <stdio.h>

int main() {
	
	// how to take input from user?
	
	int age;
	printf("how old are you? ");
	scanf("%d", &age);
	
	printf("you are %d\n", age);
	
	
	// input marks?
	
	float marks;
	printf("what is your marks? ");
	scanf("%f", &marks);
	
	printf("you scored %.2f", marks);
	
	return 0;
}
