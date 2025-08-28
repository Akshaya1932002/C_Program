#include <stdio.h>

int main() 
{
    int cabin = 1; 
    int seat;
    char people[20];

    printf("welcome to giant wheel !\n");
     
    while (cabin <= 3) 
    {    
        seat=1; 
        while (seat <= 3)
        {   
            printf("Person %d in cabin %d\n", seat, cabin);
            scanf("%s", people);
            seat++;
        }
        printf("Cabin %d is now full.\n", cabin);

        cabin++;
        
    }
       printf("Thank you for riding with us!\n");

    return 0;
}


