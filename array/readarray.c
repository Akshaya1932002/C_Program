#include<stdio.h>
void main()
{
    int beta[10];
    int a;
    printf("Read the Print elements Array:\n"); //read the  input elements of the array
    printf("Inputs OF array Elements:\n");

    for(int a=0;a<10;a++)
    {
        printf("Elements = %d", a);
        scanf("%d",&beta[a]);
    }

    printf("\n Elements Array are:");
    for(a=0;a<10;a++)
    {
        printf(" %d ", beta[a]);
    }
    printf("\n");
}
