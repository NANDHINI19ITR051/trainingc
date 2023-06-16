#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;
};

int main()
{
   struct Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);
    
    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name);

    printf("Enter Marks in Physics: ");
    scanf("%f", &student.physicsMarks);
    
    printf("Enter Marks in Math: ");
    scanf("%f", &student.mathMarks);
    
    printf("Enter Marks in Chemistry: ");
    scanf("%f", &student.chemistryMarks);

    // Calculating total and percentage
    student.totalMarks = student.physicsMarks + student.mathMarks + student.chemistryMarks;
    student.percentage = (student.totalMarks / 300.0) * 100.0;

    // Print summary
    printf("\nSummary:\n");
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Physics Marks: %.2f\n", student.physicsMarks);
    printf("Math Marks: %.2f\n", student.mathMarks);
    printf("Chemistry Marks: %.2f\n", student.chemistryMarks);
    printf("Total Marks: %.2f\n", student.totalMarks);
    printf("Percentage: %.2f%%\n", student.percentage);
    return 0;
}

