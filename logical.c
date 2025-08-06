#include<stdio.h>
int main()
{
    //AND
    int budget;
    printf("tell us your budget: ");
    scanf("%d",&budget);
    printf("\n can i get free delivery:%d",(budget>250));
    printf("\n can i get 10 percent:%d",(budget>850))&&(budget<=3000);
    return -1;

    //OR
    //char bank='\0';
    //printf("\n enter the bank first letter of your debit card");
    //bank=getchar();
    //printf("\n am i eligible to get 10 percent additionnal discount:%d");
    //(||(bank=='h')||(bank=='H')||(bank=='c')||(bank=='C'));
    
    
}

