#include <stdio.h>

struct bank {
    int acc_number;
    char acc_holder_name[50];
    float balance;
};

int main() 
{
    struct bank accounts[3];  // Array of 3 accounts
    int i;

    // Input details for 3 accounts
    for(i = 0; i < 3; i++) 
    {
        printf("\nEnter account details (Acc_Number Acc_Holder_Name Balance): ");
        scanf("%d %s %f", &accounts[i].acc_number, accounts[i].acc_holder_name, &accounts[i].balance);
    }

    // Print details of 3 accounts
    printf("Account Details:-\n");
    for(i = 0; i < 3; i++) 
    {
        printf("\n Acc_Number: %d\n Acc_Holder_Name: %s\n Balance: %.2f\n \t", accounts[i].acc_number, accounts[i].acc_holder_name, accounts[i].balance);
    }
    return 0;
}

