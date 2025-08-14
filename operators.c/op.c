#include<stdio.h>
void main()
{
    int litre,kms;
    printf("enter litre of fuel driven kms: ");
    scanf("%d%d",&litre,&kms);
    int mileage=litre/kms;

    float fuel=(float)kms/litre;
    printf("\n the consumed fuel :%f",fuel);

}