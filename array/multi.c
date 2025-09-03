#include<stdio.h>
int main()
{
    int row=0,column=0;
    int arr[3][3]={{22,11,22},{22,11,11},{22,11,22}}; //matrix format like rows and columns
    for(row=0;row<3;row++) 
    {
        for(column=0;column<3;column++) //nested loop
        {
            printf("arr[%d][%d]=[%d]\n",row,column,arr[row][column]); // this shows r01 to r03 and c01 to c03
        }
        
    }
    return 0;

}
