#include <stdio.h>
struct FD 
{
    char name[50];
    float principal;
    float rate;
    float interest;
    float maturityAmount;
};

int main() 
{
    int n;
    printf("Enter the no of FDs: ");
    scanf("%d", &n);

    struct FD fd[n]; //array of structure

    for(int i = 0; i < n; i++) 
    {
        printf("\n Fixed Deposit:- %d \n", i + 1);

        printf("Enter depositor's name: ");
        scanf("%s", fd[i].name);

        printf("Enter the amount you want to deposit(Rs): ");
        scanf("%f", &fd[i].principal);

        printf("Enter annual interest rate(%%): ");
        scanf("%f", &fd[i].rate);

        // simple interest
        fd[i].interest = (fd[i].principal * fd[i].rate) / 100;

        // maturity amount
        fd[i].maturityAmount = fd[i].principal + fd[i].interest;
    }
    printf("\n Fixed Deposit:- \n");
    for(int i = 0; i < n; i++) 
    {
        printf("\nDepositor: %s\n", fd[i].name);
        printf("Deposited Amount: Rs %.2f\n", fd[i].principal);
        printf("Annual Interest Rate: %.2f%%\n", fd[i].rate);
        printf("Interest: Rs %.2f\n", fd[i].interest);
        printf("Total Maturity Amount: Rs %.2f\n", fd[i].maturityAmount);
    }
    return 0;
}
