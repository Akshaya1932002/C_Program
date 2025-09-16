#include<stdio.h>

int main()
{
    int count = 6; 
    int data[20] = {340, 1, 10, 150, 240, 2}; 
    int i, j, temp, minIndex;

    // using selection Sort Algorithm
    for(i = 0; i < count - 1; i++) 
    {
        minIndex = i; 

        for(j = i + 1; j < count; j++) 
        {
            if(data[j] < data[minIndex]) 
            {
                minIndex = j; 
            }
        }

        if(minIndex != i) 
        {
            temp = data[i];
            data[i] = data[minIndex];
            data[minIndex] = temp;
        }
    }

    printf("Sorted Elements: ");
    for(i = 0; i < count; i++) 
    {
        printf("%d\t", data[i]);
    }

    return 0;
}
