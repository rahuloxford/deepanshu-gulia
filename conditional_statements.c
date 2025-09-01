#include <stdio.h>

int main() {
	
	// check if a user can vote?
	
//	int age;
//	printf("how old are you? ");
//	scanf("%d", &age);
//	
//	if (age >= 18) {
//		printf("You can vote");
//	} else {
//		printf("You cannot vote");
//	}


	// check if a number is even or odd?
	
//	int number;
//	printf("enter number? ");
//	scanf("%d", &number);
//	
//	if (number % 2 == 0) {
//		printf("Even");
//	} else {
//		printf("Odd");
//	}


	// if else ladder
	
	// build a grading system.
	
	// float marks;
	// printf("enter your marks? ");
	// scanf("%f", &marks);
	
	// if (marks > 100 || marks < 0) {
	// 	printf("wrong marks entered");
	// } else if (marks >= 90) {
	// 	printf("A");
	// } else if (marks >= 80) {
	// 	printf("B");
	// } else if (marks >= 70) {
	// 	printf("C");
	// } else if (marks >= 60) {
	// 	printf("D");
	// } else if (marks >= 50) {
	// 	printf("E");
	// } else {
	// 	printf("F");
	// }

	float weight, height;

	printf("Enter your weight (KG): ");
	scanf("%f", &weight);

	printf("Enter your height (M): ");
	scanf("%f", &height);

	float bmi = weight / (height * height);

	printf("Your bmi is: %.2f\n", bmi);

	if (bmi < 18.5) {
		printf("Underweight");
	} else if (bmi < 25) {
		printf("Normal");
	} else if (bmi < 30) {
		printf("Overweight");
	} else {
		printf("Obese");
	}

	return 0;
}
