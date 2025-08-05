#include<stdio.h>
#include<conio.h>
void main()
{
    int empid;
    char empName[20]="";
    char skill[20]="";
    char place[20]="";
    int experience;
    double salary;
    printf("enter the employee id \n");
    scanf("%d",&empid);
    printf("enter the employee id: %d \n",empid);

    printf("enter the employee name \n");
    scanf("%s",&empName);
    printf("my name is: %s \n",empName);

    printf("enter the skillset \n");
    scanf("%d",&skill);
    printf("skill is :%d, \n",skill);

    printf("enter the place \n");
    scanf("%s",&place);
    printf("location is :%s, \n",place);

    printf("how many years experience \n");
    scanf("%d",&experience);
    printf("my total experience is :%d \n",experience);

    printf("my salary \n");
    scanf("%lf",&salary);
    printf("salary is :%lf, \n",salary);



}

    