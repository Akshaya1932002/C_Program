#include<stdio.h>
union detail
{
char name[100];
int id;
}company;
struct employee
{
char emp_name[50];
int emp_id;
}office;
int main()
{
printf("union and structure");
printf("union size:%d bytes\n",sizeof(company));
printf("structure size:%d bytes\n",sizeof(office));
return 0;
}