#include<stdio.h>
int main()
{
 int account_number;
 float balance;
 char name[100];
 int withdrawal_amount;
 int valid;

 printf("Account Details: \n");

 printf("Enter account number: \n ");
 scanf("%d", &account_number);

 printf("Enter account holder name: \n ");
 scanf("%s", &name);

 printf("Enter account balance: \n ");
 scanf("%f", &balance);

 printf("Enter withdrawal amount: \n ");
 scanf("%d", &withdrawal_amount);

 valid = (withdrawal_amount > 0) && (withdrawal_amount <= balance); // using assignment,logical and relational operator.
  if (valid) 
     {
        balance = balance - withdrawal_amount; //using arithmetic operator.
        printf("Withdrawal successful! \n");
        printf("Remaining Balance: %.2f\n", balance);
     } 
    else
     {
        printf("Invalid withdrawal amount! \n");
     }

      printf("Account Number: %d\n", account_number);
      printf("Account Holder Name: %s\n", name);
      printf("Account Balance: %.2f\n", balance);
      printf("withdrawal_amount: %d\n", withdrawal_amount);
     
 return 0;
}
