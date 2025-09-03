#include<stdio.h>
void main()
{
    int row,column;
    printf("enter the row size");
    scanf("%d",&row);
    printf("enter the column size");
    scanf("%d",&column);

    int arr[row][column];
    int a,b;
    printf("Enter the array elements:\n");

    for(a=0;a<row;a++) //this loop is for add the value of the matrix from R11 TO R13 and C11 to C13
    {
        for(b=0;b<column;b++)
        {
            scanf("%d",&arr[a][b]);
        }
    }
    
    int sum=0;
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            sum=sum+arr[a][b];
        }
    }
    printf("The sum of all array elements is %d",sum);
}
