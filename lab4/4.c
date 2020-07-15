//Declare another array with ten (10) values and compare both array whether they are same or not//
#include<stdio.h>
int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12},size;
    int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    size=sizeof(array1)/4;
    int i,count=0;

    for(i=0 ; i < size; i++)
    {
        if(array2[i] != array1[i])
        {
            printf("Array1 and array2 Not same\n");
            count++;
            break;
        }
    }
    if(count==0)
    printf("Array1 and Array2 are Same\n");

    return 0;
}
