#include<stdio.h>
void main()
{
    int row,column;
    int a,b;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the column size: ");
    scanf("%d", &column);

    int arr1[row][column], arr2[row][column];
    int mul[row][column];

    //input elements in first array
    printf("Enter the elements of first array:\n");
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            scanf("%d",&arr1[a][b]);
        }
    }

    //input elements in second array
    printf("Enter the elements of second array:\n");
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            scanf("%d",&arr2[a][b]);
        }
    }

    //multiply two arrays
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            mul[a][b]=arr1[a][b]*arr2[a][b];
        }
    }

    //print multiplication array
    printf("Elements of multiplication array are:\n");
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            printf("%d ",mul[a][b]);
        }
        printf("\n");
    }
}
