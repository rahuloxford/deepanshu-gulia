#include <stdio.h>

int main() {
    // print "Hello World" 10 times.
    
    // int count = 1;

    // while (count <= 10) {
    //     printf("Hello world %d\n", count);
    //     count++;
    // }


    // print 20 to 50

    // int i = 20;
    // while (i <= 50) {
    //     printf("%d\n", i);
    //     i++;
    // }

    // print 20 to 50 (only evens)

    // int i = 20;
    // while (i <= 50) {
    //     if (i % 2 != 0) {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }


    // print 80 to 40

    // int i = 80;
    // while (i >= 40) {
    //     printf("%d\n", i);
    //     i--;
    // }


    // do while

    // print 30 to 60

    // int i = 30;

    // do {
    //     printf("%d\n", i);
    //     i++;
    // } while (i <= 60);

    // print 60 to 20

    // int i = 60;
    // do {
    //     printf("%d\n", i);
    //     i--;
    // } while (i >= 20);


    // for loop

    // for (int j = 1; j <= 10; j++) {
    //     printf("Hello World %d\n", j);
    // }


    // print the table of a number?
    // int number;
    // printf("Enter a number here: ");
    // scanf("%d", &number);

    // for (int i = 1; i <= 10; i++) {
    //     printf("%d x %d = %d\n", number, i, number * i);
    // }


    
    // continue
    // print 1 to 10 but skip 5, 8
    for (int i = 1; i <= 10; i++) {
        if (i == 5 || i == 8) {
            // break;
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}