#include <stdio.h>

int main() 
{
    int cabins = 10;
    int seats = 3;
    char people[20];

    for (int c = 1; c <= 10; c++) 
    {
        printf("Welcome to cabin %d\n", c);

        for (int s = 1; s <= 3; s++) 
        {
            printf("Enter the name of person %d: ", s);
            scanf("%s", people);
        }
        printf(" %d Cabin is now full.\n", c);
        
    }
    printf("wait for the next ride\n");
    return 0;
}

