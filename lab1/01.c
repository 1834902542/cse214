/* Scan N (take input N from user) value from user into an array*/
#include <stdio.h>
int main()
{
    int array[100];
    int i=0,j,n;
    printf("Enter array size (max 100) : \n");
    scanf("%d",&n);
    while(scanf("%d",&array[i])!=EOF)
    {
        if((n-1)<=i)
        {
            printf("\n\tProgram Overflow. \n");
             return 0;
        }
        i++;
    }
    for(j=0; j<i; j++)
    {
        printf("%d ",array[j]);
    }
    return 0;
}
