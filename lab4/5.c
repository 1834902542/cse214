//Declare another array with five (5) values and merge two array into one array//
#include<stdio.h>
int main()
{
    int array1[] = {1, 2, 3, 4, 5},size;
    int array2[] = {6, 7, 8, 9, 10},size2,i,j;
    size=sizeof(array1)/4;
    size2=sizeof(array2)/4;
    int array3[size+size2];

    for(i = 0; i < size; i++)
    {
        array3[i]=array1[i];

    }

    for(j = 0; j < size2; j++,i++)
    {
        array3[i]=array2[j];
    }

    printf("\nArray\n");
    for(int k = 0; k<size+size2; k++)
    {
        printf("%d ",array3[k]);
    }
    return 0;
}



