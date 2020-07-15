//Copy the given array into another array

#include<stdio.h>
int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13},size;
    size=sizeof(array1)/4;
    int array2[size], i;
    for(i ; i < size; i++)
    {
        array2[i] = array1[i];
    }
    printf("Array 1\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",array1[i]);
    }
        printf("\nCopy Another Array(array2 from array1)\n Array 2\n");
    for(i = 0; i < size; i++)
    {

        printf("%d ",array2[i]);
    }
    return 0;
}

