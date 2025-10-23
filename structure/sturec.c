#include <stdio.h>
#include <string.h>

struct student 
{
    char name[50];
    float cgpa;
    char company[50];
};

void print(struct student);
int main() 
{
    struct student s1, s2, s3;

    // First student input
    printf("Enter first student name and CGPA:\n");
    scanf(" %[^\n]", s1.name);   // read name with spaces
    scanf("%f", &s1.cgpa);

    // Assign company based on CGPA
    if (s1.cgpa >= 9.5)
        strcpy(s1.company, "Google");
    else if (s1.cgpa >= 8.5)
        strcpy(s1.company, "Wipro");
    else if (s1.cgpa >= 7.5)
        strcpy(s1.company, "TCS");
    else
        strcpy(s1.company, "Not Eligible");

    // Second student input
    printf("Enter second student name and CGPA:\n");
    scanf(" %[^\n]", s2.name);
    scanf("%f", &s2.cgpa);

    if (s2.cgpa >= 9.5)
        strcpy(s2.company, "Google");
    else if (s2.cgpa >= 8.5)
        strcpy(s2.company, "Wipro");
    else if (s2.cgpa >= 7.5)
        strcpy(s2.company, "TCS");
    else
        strcpy(s2.company, "Not Eligible");

    // Third student input
    printf("Enter third student name and CGPA:\n");
    scanf(" %[^\n]", s3.name);
    scanf("%f", &s3.cgpa);

    if (s3.cgpa >= 9.5)
        strcpy(s3.company, "Google");
    else if (s3.cgpa >= 8.5)
        strcpy(s3.company, "Wipro");
    else if (s3.cgpa >= 7.5)
        strcpy(s3.company, "TCS");
    else
        strcpy(s3.company, "Not Eligible");

    // Print student details
    print(s1);
    print(s2);
    print(s3);

    return 0;
}

void print(struct student s) 
{
    printf("\nStudent details:\n");
    printf("Name: %s\nCGPA: %.1f\nCompany: %s\n", s.name, s.cgpa, s.company);
}
