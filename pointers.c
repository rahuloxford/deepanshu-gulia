#include <stdio.h>

int main() {

    /* 
    pointers:
    a variable that store the address of another variable
    as it's own value.    
    */

    int age = 45;
    printf("%d\n", age);
    // printf("%p\n", &age);
    
    // create a pointer.
    int *ptr = &age; // reference
    printf("%p\n", ptr);
    
    // printf("%d\n", *ptr); // dereference
    
    *ptr = 33;
    
    printf("%d\n", *ptr); // dereference
    printf("%d\n", age);

    return 0;
}