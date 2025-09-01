#include <stdio.h>

int main() {

    // find the largest among three numbers?

    int a, b, c;

    printf("Enter the first number? ");
    scanf("%d", &a);
    printf("Enter the second number? ");
    scanf("%d", &b);
    printf("Enter the third number? ");
    scanf("%d", &c);


    if (a > b) {
        if (a > c) {
            printf("%d", a);
        } else {
            printf("%d", c);
        }
    } else {
        if (b > c) {
            printf("%d", b);
        } else {
            printf("%d", c);
        }
    }

    return 0;
}