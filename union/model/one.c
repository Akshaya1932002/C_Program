#include<stdio.h>
struct person{
    char name[20];
    int age;
};
int main()
{
    struct person one={"Akshaya", 23};
    printf("Name is %c\n", one.name);
    printf("Age is %d\n", one.age);
    return 0;
}
