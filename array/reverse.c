#include<stdio.h>
void main()
{
    int box[5];
    int a;

    printf("Read the elements of the array in reverse order:\n");
    scanf("%d %d %d %d %d", &box[0], &box[1], &box[2], &box[3], &box[4]);
    printf("Elements of the array in reverse order are:\n");
    for(a=4;a>=0;a--)
    {
        printf("%d ",box[a]);
    }
    printf("\n");
}
