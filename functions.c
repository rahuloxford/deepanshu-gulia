#include <stdio.h>

void greetings(char name[30]) {
    printf("Welcome to out store, %s\n", name);
}

void student(char name[30], int rno, float marks) {
    printf("Student name: %s\n", name);
    printf("Student rno: %d\n", rno);
    printf("Student marks: %.2f\n", marks);
}

int addition(int a, int b, int c) {
    return a + b + c;
    // printf("This wont run"); // unreachable statement.
}

int main() {
    int result = addition(16, 86, 34);
    printf("%d", result);

    // student("Jonathan", 113689, 89.36);
    // student("Billy", 248969, 76.35);
    // student("Linda", 479876, 93.25);
    // greetings("Steve");
    // greetings("Tom");
    // greetings("Billy");
    // greetings("Jonathan");
    return 0;
}
