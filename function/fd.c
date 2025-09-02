#include<stdio.h>
int main() {
    float principal, rate, maturityAmount, interest;

    // Taking inputs
    printf("Enter the Principal Amount (Rs): ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest (%%): ");
    scanf("%f", &rate);

    // Simple Interest calculation
    interest = (principal * rate) / 100;

    // Maturity Amount = Principal + Interest
    maturityAmount = principal + interest;

    // Display result
    printf("\nPrincipal Amount: Rs %.2f", principal);
    printf("\nRate of Interest: %.2f%%", rate);
    printf("\nInterest Earned: Rs %.2f", interest);
    printf("\nMaturity Amount: Rs %.2f\n", maturityAmount);

    return 0;
}
