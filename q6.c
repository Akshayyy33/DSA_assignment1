// 6.	Write a C program using array of structures with dynamic memory allocation to store employee details and find the employee with the highest salary.

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee *e;
    int n, i, maxIndex = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    e = (struct Employee *)malloc(n * sizeof(struct Employee));

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);

        if (e[i].salary > e[maxIndex].salary)
            maxIndex = i;
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n",
           e[maxIndex].id, e[maxIndex].name, e[maxIndex].salary);

    free(e);
    return 0;
}
