#include <stdio.h>

int main() {
    int n, i, total = 0, marks;
    float avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int student_marks[n];

    for(i=0; i<n; i++) {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks);
        student_marks[i] = marks;
        total += marks;
    }

    avg = (float)total / n;
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", avg);

    for(i=0; i<n; i++) {
        printf("Grade of student %d: ", i+1);
        if(student_marks[i] >= 90) printf("A\n");
        else if(student_marks[i] >= 75) printf("B\n");
        else if(student_marks[i] >= 60) printf("C\n");
        else printf("F\n");
    }

    return 0;
}
