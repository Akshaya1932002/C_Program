#include<stdio.h>
int main()
{
   float weight=0.0f;
   printf("\n tell us weight: ");
   scanf("%f",&weight);
   if(weight>=40&&weight<=89)
   {
    printf("\n you are eligible for cricket tournament");
   } 
   else
   {
    printf("\n not eligible");
   }
}