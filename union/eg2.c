#include <stdio.h>
union school
{
char name[50];
int strength;
}school;
struct students
{
char name[20];
int strength;
}students;
int main()
{
printf("union and structure");
printf("union size:%d bytes\n",sizeof(school));
printf("structure size:%d bytes\n",sizeof(students));
return 0;
}
