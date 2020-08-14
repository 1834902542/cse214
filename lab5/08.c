/*  Delete a value from Kth index (take input K from user) from the
    array shift all other value to left. And print the whole array.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int *point;
    int i, x;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    printf("Main Array : \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nDelete value : ");
    scanf("%d",&x);
    point = &array[0];

    for (i=x-1; i<size; i++)
    {
        *(point+i) = *(point+i+1);
    }


    size--;

    for(i=0; i<size; i++)
    {
        printf("%d ", *(point+i));
    }


    return 0;
}

