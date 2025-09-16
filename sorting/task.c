#include<stdio.h>
int main() 
{
    int count = 6;                  
    int data[20] = {100, 120, 1, 60, 20, 3}; 
    int temp, i, j;
    
    //using bubblesort Algorithm
    for(i = count - 2; i >= 0; i--) 
    {
        for(j = 0; j <= i; j++)
        {
            if(data[j] > data[j+1]) 
            {
                temp = data[j];      
                data[j] = data[j+1]; 
                data[j+1] = temp;    
            }
        }
    }
    
    printf("Sorted Elements: ");
    for(i = 0; i < count; i++) 
    {
        printf("%d\t", data[i]);
    }
    return 0;
}
