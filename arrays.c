#include <stdio.h>

int main() {
    /* what is an array?
    - array is a ds that store multiple elements
    of similar type inside a single variable. */

    // why we need arrays?
    //  store 5 rnos
    // using arrays
    // index nos: 0   1   2   3   4
    // int rnos[] = {13, 24, 85, 39, 73, 90, 55, 100, 25};
    // int length = sizeof(rnos) / sizeof(rnos[0]);

    // for (int index = 0; index < length; index++) {
    //     printf("%d ", rnos[index]);
    // }


    // float marks[] = {86.23, 57.25, 63.5, 94.3, 53.4};
    // int length = sizeof(marks) / sizeof(marks[0]);

    // for (int index = 0; index < length; index++) {
    //     printf("%.2f ", marks[index]);
    // }


    // another way of creating arrays?

    float marks[5];
    int length = sizeof(marks) / sizeof(marks[0]);

    // marks[0] = 95.8;
    // marks[1] = 83.8;
    // marks[4] = 75.9;

    // input
    // for (int index = 0; index < length; index++) {
    //     printf("Enter your marks? ");
    //     float score;
    //     scanf("%f", &score);
    //     marks[index] = score;
    // }


    // output
    // for (int index = 0; index < length; index++) {
    //     printf("%.2f ", marks[index]);
    // }


    // 


    return 0;
}