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

    fp = fopen("employee.bin", "rb"); // Open in binary read mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    printf("Employee Data\n");
    while (fread(&employee, sizeof(Employee), 1, fp) == 1) {
        
        printf("Email: %s, Age: %d, Salary: %.2f\n", employee.email, employee.age, employee.salary);
    }

    fclose(fp);
    return 0;
}