#include<stdio.h>
int add();
void main()
{
    int sum;
    printf("\n sum of numbers: ");
    sum=add();
    printf("%d",sum);
}
int add()
{
    int alpha,beta;
    printf("\n enter the adding two numbers:");
    scanf("%d%d",&alpha,&beta);
    return alpha+beta;
}