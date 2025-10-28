#include <stdio.h>

int main() {
    int n, i;
    float salary, total = 0, avg;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        printf("Enter salary of employee %d: ", i);
        scanf("%f", &salary);
        total += salary;
    }

    avg = total / n;
    printf("Average Salary: %.2f\n", avg);

    return 0;
}

