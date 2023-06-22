/******************************************************************************

write a program to Store Data for n students in Structures Dynamically.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct student {
  char name[50];
  int rollno;
  float marks;
};

void main() {
  int n;
  struct student *s;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  s = (struct student *)malloc(n * sizeof(struct student));

  for (int i = 0; i < n; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s",s[i].name);
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &s[i].rollno);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &s[i].marks);
  }

  for (int i = 0; i < n; i++) {
    printf("Name : %s\n", s[i].name);
    printf("Roll number : %d\n", s[i].rollno);
    printf("Marks : %.1f\n", s[i].marks);
  }

  free(s);
}

