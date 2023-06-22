#include <stdio.h>
#include <stdlib.h>

// Structure to represent student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int numStudents;
    struct Student *students;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Dynamically allocate memory for the students
    students = (struct Student *) malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("Enter marks: ");
        scanf("%f", &(students[i].marks));
    }

    // Display the student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}