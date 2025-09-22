#include <stdio.h>

int i = 101; // global

int demo() {
    i = 900;
    int a = 88; // local
    printf("%d\n", i);
}

int main() {
    // functions: scope
    demo();
    printf("%d\n", i);
	
	return 0;
}
