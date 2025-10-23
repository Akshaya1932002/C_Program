#include <stdio.h>

struct school {
    int roll_number;
    char student_name[50];
    float marks;
};

int main() 
{
    struct school students[10];  // Array of 10 students
    int i;

    // Input details for 10 students
    for(i = 0; i < 10; i++) 
    {
        printf("\nEnter student details (Roll_Number Student_Name Marks): ");
        scanf("%d %s %f", &students[i].roll_number, students[i].student_name, &students[i].marks);
    }

    // Print details of 10 students
    printf("Student Details:-\n");
    for(i = 0; i < 10; i++) 
    {
        printf("\n roll_number: %d\n student_name: %s\n marks: %.2f\n \t", students[i].roll_number, students[i].student_name, students[i].marks);
    }
    return 0;
}
