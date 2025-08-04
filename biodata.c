#include<stdio.h>
#include<conio.h>
void main()
{
    char name[20];
    char place[20];
    char college[50];
    char gender[10];
    

    gets(name);
    gets(place);
    gets(college);
    gets(gender);

    

    printf("name: %s\nplace: %s\ncollege: %s\ngender: %s\n",name,place,college,gender);
}