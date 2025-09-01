#include <stdio.h>
#include <stdbool.h>

int main() {
	
	// operators?? - symbols that perform some operations.
	
	// Arithemetic operators
	int a = 10;
	int b = 3;
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	printf("%d\n", a % b);
	
	// Comparison operators
//	printf("%d\n", 14 > 13);
//	printf("%d\n", 14 >= 13);
//	printf("%d\n", 12 < 13);
//	printf("%d\n", 12 <= 13);
//	
//	printf("%d\n", 9 == 9); // (equal to)
//	printf("%d\n", 14 != 13); // (not equal to)


	// Logical operators
	// && -> return true if both operands true.
	
//	printf("%d\n", true && true);
//	printf("%d\n", true && false);
//	printf("%d\n", false && true);
//	printf("%d\n", false && false);


	// || -> return true if any one operands is true
	
//	printf("%d\n", true || true);
//	printf("%d\n", true || false);
//	printf("%d\n", false || true);
//	printf("%d\n", false || false);

	// ! - reverse the operand
//	printf("%d\n", !true);
//	printf("%d\n", !false);
	
	
	// REAL WORLD USES
	
	int number;
	printf("enter number? ");
	scanf("%d", &number);
	
	if (number % 3 == 0 || number % 5 == 0) {
		printf("yes");
	} else {
		printf("no");
	}

	// bool isWinter = false;
	
	
	return 0;
}
