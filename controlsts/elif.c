#include<stdio.h>
void main()
{
    int member;
    printf("enter the member count: ");
    scanf("%d",&member);
    if(member>50)
    {
        printf("The group is allowed \n");
    }
    else if(member<1 && member>=30)
    {
        printf("The group is not allowed \n");
    }
    else
    {
         printf("The group is never allowed \n");  
    }
}
