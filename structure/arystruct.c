#include <stdio.h>

struct Bank {
    int acc_number;
    char acc_holder_name[50];
    double balance;
};

int times;
void insert(struct Bank *b);
void print(struct Bank *b);

int main() 
{
    struct Bank account[3];  // Array of 3 accounts
    times = 0;
    insert(account);   // Read details
    times = 0;
    print(account);    // Print details
    return 0;
}

void insert(struct Bank *b) 
{
    if (times >= 3) 
    {
        return;
    } else 
    {
        printf("\nEnter account details (Acc_Number Acc_Holder_Name Balance): ");
        scanf("%d %s %lf", &b->acc_number, b->acc_holder_name, &b->balance);
        times++;
        insert(b + 1);
    }
}

void print(struct Bank *b) 
{
    if (times >= 3) 
    {
        return;
    } else 
    {
        printf("\nAccount details: ");
        printf("\nAcc_Number: %d\tAcc_Holder_Name: %s\tBalance: %.2lf",b->acc_number, b->acc_holder_name, b->balance);
               
        times++;
        print(b + 1);
    }
}
