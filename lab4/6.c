//Merge the elements of two sorted array

#include<stdio.h>
int main()
{
    int array1[5] = {1, 8, 6, 2, 7}, size= 5;
    int array2[5] = {5, 4, 3, 9, 10}, i, j, size2= 5;
    int array3[10], temp;
    int size3 = size + size2;

    for(i = 0; i < size; i++)
    {
        array3[i] = array1[i];
    }

    for(i = 0, j = size; i < size3; i++,j++)
    {
        array3[j] = array2[i];
    }

    for(i = 0; i < size3; i++)
    {
        printf("%d ",array3[i]);
    }
    printf("\n");

    for(i = 0; i < size3; i++)
    {
        for(j = i + 1; j < size3; j++)
        {
            if(array3[i] > array3[j]){
                temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }
    for(i = 0; i < size3; i++){
        printf("%d ",array3[i]);
    }

    return 0;
}
