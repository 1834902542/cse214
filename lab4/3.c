//Reverse the given array  within the same array
#include<stdio.h>
int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13},size,i,j;
    size=sizeof(array1)/4;

    printf("Main Array  \n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",array1[i]);

    }
        printf("\nArray Reverse \n");

    for(j = size-1; j>= 0; j--)
    {
        printf("%d ",array1[j]);
    }
    return 0;
}


