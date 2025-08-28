#include<stdio.h>

int main()
 {
    int ticket_number;
    int water_park_id;
    int age;
    int height;

    printf("Welcome to Wonderla ! \n");
    printf("Enter your ticket number: ");
    scanf("%d", &ticket_number);
    printf("Your ticket number is: %d\n", ticket_number);

    printf("Enter your water park ID: ");
    scanf("%d", &water_park_id);
    printf("Your water park ID is: %d\n", water_park_id);

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);

    // Check age eligibility for the ride
    if (age < 12) 
    {
        printf("You are not eligible for this ride.\n");
    }
    else if (age >= 12 && age <= 45) 
    {
        printf("You are eligible for this ride.\n");
    } 
    else
    {
        printf("You are not eligible for this ride due to age restrictions.\n");
    }

    printf("Enter your height in cm: ");
    scanf("%d", &height);
    printf("Your height is: %d cm\n", height);

    // Check height eligibility for the ride
    if (height < 120) 
    {
        printf("You are not eligible for this ride due to height restrictions.\n");
    }  
    else if (height >= 120 && height <= 170) 
    {
        printf("You meet the height requirement for this ride.\n");
    } 
    else if (height <= 175) 
    {
        printf("You meet the height requirement for this ride.\n");
    }
    else 
    {
        printf("you will not meet the required height.\n");
    }
    printf("Thank you for visiting Wonderla !\n");
    return 0;
}
