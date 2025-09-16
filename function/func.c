#include<stdio.h>
int classroom();
void main()
{
    int total;
    printf("\n Total number of students in class: ");
    total=classroom();
    printf("%d",total);
}
int classroom()
{
    int a,b,c;
    printf("\n enter the number of students in three sections:");
    scanf("%d%d%d",&a,&b,&c);
    return a+b+c;
}
