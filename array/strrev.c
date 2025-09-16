#include<stdio.h>
int main()
{
    char name[20]; //string declaration
    printf("Enter a string values: ");
    scanf("%s",name);

    //using array[]
    int i;
    for(i=i-1;i>=0;i--)
    {
        scanf("%s",&name[i]);
    }
    printf("Reversed string is: ");
    printf("\n");
    return 0;
}
