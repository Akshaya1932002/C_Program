//reverse of array
#include<stdio.h>
#define N 5
int main()
{
    int arr[N];
    int i;
    int n;
    printf("Enter %d elements in array:\n",N);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("reversed array:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
