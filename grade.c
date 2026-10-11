#include <stdio.h>

int main() {
    int student, course;
    int mark, total, highest, lowest;
    double average;
    char grade[2];
    char interpretation[30];

    // Outer loop: Process 5 students
    for (student = 1; student <= 5; student++) {

        total = 0;
        highest = 0;
        lowest = 100;

        printf("\n===== Student %d =====\n", student);

        // Inner loop: Enter marks for 5 courses
        for (course = 1; course <= 5; course++) {

            printf("Enter marks for course %d (0-100): ", course);
            scanf("%d", &mark);

            // Validate the mark
            while (mark < 0 || mark > 100) {
                printf("Invalid mark. Please enter again.\n");
                printf("Enter marks for course %d (0-100): ", course);
                scanf("%d", &mark);
            }

            // Calculate total
            total += mark;

            // Find highest mark
            if (mark > highest) {
                highest = mark;
            }

            // Find lowest mark
            if (mark < lowest) {
                lowest = mark;
            }
        }

        // Calculate average
        average = total / 5.0;

        // Determine grade and interpretation
        if (average >= 90) {
            grade[0] = 'A';
            grade[1] = '\0';
            sprintf(interpretation, "Outstanding");
        } else if (average >= 80) {
            grade[0] = 'B';
            grade[1] = '\0';
            sprintf(interpretation, "Very Good");
        } else if (average >= 70) {
            grade[0] = 'C';
            grade[1] = '\0';
            sprintf(interpretation, "Good");
        } else if (average >= 60) {
            grade[0] = 'D';
            grade[1] = '\0';
            sprintf(interpretation, "Satisfactory");
        } else if (average >= 50) {
            grade[0] = 'E';
            grade[1] = '\0';
            sprintf(interpretation, "Needs Improvement");
        } else {
            grade[0] = 'F';
            grade[1] = '\0';
            sprintf(interpretation, "Fail");
        }

        // Display student results
        printf("\n--- Results for Student %d ---\n", student);
        printf("Total Marks: %d\n", total);
        printf("Average Marks: %.2f\n", average);
        printf("Highest Mark: %d\n", highest);
        printf("Lowest Mark: %d\n", lowest);
        printf("Grade: %s\n", grade);
        printf("Interpretation: %s\n", interpretation);
    }

    return 0;
}