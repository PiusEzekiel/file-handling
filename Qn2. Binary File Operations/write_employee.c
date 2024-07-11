#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char email[100];
    int age;
    float salary;
} Employee;

int main() {
    FILE *fp;
    Employee employee;

    fp = fopen("employee.bin", "wb"); // Open in binary write mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter email for employee %d: ", i + 1);
        scanf("%s", employee.email);

        printf("Enter age for employee %d: ", i + 1);
        scanf("%d", &employee.age);

        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &employee.salary);

        fwrite(&employee, sizeof(Employee), 1, fp); // Write employee data to file
    }
    printf("Employee data written to file!\n");

    
    fclose(fp);
    
    return 0;
}