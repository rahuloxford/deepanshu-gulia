#include <stdio.h>

int main() {
    // C does'nt provide a string type.
    // We use array of char to create a string.

    // char name[] = "Jonathan Byers";
    // printf("Welcome %s\n", name);
    // printf("No of chars in name: %d\n", sizeof(name));


    // another way of creating string.
    // char name[] = {'J', 'a', 'c', 'o', 'b', '\0'};
    // printf("%s ", name);
    // printf("%d", sizeof(name));


    // char name[30] = "Jonathan Byers";
    // name[9] = 'M';
    // printf("Welcome %s\n", name);
    // printf("Third character in name: %c\n", name[2]);
    // printf("No of chars in name: %d\n", sizeof(name));



    // Special character
    printf("I am \\ThorOdin\\ \ngod of \tthunder");



    return 0;
}