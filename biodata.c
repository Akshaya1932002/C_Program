#include<stdio.h>
#include<conio.h>
void main()
{
    char name[20];
    char place[20];
    char college[50];
    char gender[10];
    printf("Enter the name");
    gets(name);
    printf("Enter the place");


    gets(place);
    printf("Enter the college");
    gets(college);
    printf("Enter the Gender");
    gets(gender);

    

    printf("name: %s\nplace: %s\ncollege: %s\ngender: %s\n",name,place,college,gender);
}
