#include <stdio.h>

int main() {
    // Multidimentional Arrays

    // 2D arrays
    // int arr[3][3] = {
    //     {10, 20, 30},
    //     {40, 50, 60},
    //     {70, 80, 90}
    // };

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }



    // int arr[3][3];

    // // input
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         int element;
    //         printf("Enter the value for index [%d, %d]: ", i, j);
    //         scanf("%d", &element);

    //         arr[i][j] = element;
    //     }
    // }

    // // output
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }



    // 3D

    char letters[2][2][2] = {
        {
            {'a', 'b'},
            {'c', 'd'}
        },
        {
            {'e', 'f'},
            {'g', 'h'}
        }
    };


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%c ", letters[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}