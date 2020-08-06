#include<stdio.h>
int main()
{
    int arr[10] = {8,7,2,1,9};
    int size=5,i=0,x,count=0;
    printf("Please search value x : ");
    scanf("%d",&x);
    for(i;i<size;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]==x)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nNot Found");
    }
    if(count!=0)
    {
        printf("\nFound");
    }
    return 0;
}
