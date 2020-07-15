//Reverse the given array and store it in another array

#include<stdio.h>
int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13},size,i,j;
    size=sizeof(array1)/4;
    int array2[size];


    printf("Main Array  \n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",array1[i]);

    }

        printf("\nArray Reverse  and store Another Array\n");

    for(i = 0; i < size; i++)
    {
        array2[i]=array1[i];
    }

    for(j = size-1; j>= 0; j--)
    {
        printf("%d ",array1[j]);
    }
    return 0;
}

