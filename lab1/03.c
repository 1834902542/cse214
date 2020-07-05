/*Scan value from user into an array until user is 0(zero)*/

#include<stdio.h>
int main()
{
    int array[100];
    int i=0,j=0;
    printf("input value (max 100 index) input 0 program well be terminated\n");
    for(i;i<100;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]==0)
        {
            break;
        }
    }
    for(j;j<i;j++)
    {
        printf("%d ",array[j]);
    }
    return 0;
}

