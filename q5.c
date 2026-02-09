// 5.	Write a C program using structure and dynamic memory allocation to store and display student details such as roll number, name, and marks.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student *s;
    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
    printf("\nStudent Details:\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s->roll, s->name, s->marks);

    free(s);
    return 0;
}
