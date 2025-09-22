#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int age;
    float marks;
};

int main() {
    // store 5 student details:
    // name, rno, marks

    struct Student s1 = {"Owen Cooper", 15, 83.6};
    // strcpy(s1.name, "Owen Cooper");
    // s1.age = 17;
    // s1.marks = 83.5;
    struct Student s2 = {"Tom Holland", 23, 95.3};
    // strcpy(s2.name, "Tom Holland");
    // s2.age = 23;
    // s2.marks = 73.5;

    printf("%s is %d year old and scored %.2f\n", s1.name, s1.age, s1.marks);
    printf("%s is %d year old and scored %.2f\n", s2.name, s2.age, s2.marks);

    return 0;
}