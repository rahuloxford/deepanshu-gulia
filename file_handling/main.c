#include <stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("marvel.txt", "r");

    // fprintf(fptr, "\nSteve rogers\n");
    // fprintf(fptr, "Bruce banner");

    char message[100];
    while (fgets(message, 100, fptr)) {
        printf("%s", message);
    }
    
    fclose(fptr);

    return 0;
}