/*  Insert a value “X” (take input X from user) in the array
    at Kth (take input K from user) index and shift all other
    value to right. And print the whole array. Access the array
    using pointer */

#include<stdio.h>
int main()
{
    int *point;
    int i, x, y;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    printf("Inter value : ");
    scanf("%d",&x);
    printf("Inter position : ");
    scanf("%d",&y);
    point = &array[0];
    for (i=size; i>=y; i--)
    {
        *(point+i) = *(point+i-1);
    }
    size++;
    *(point+y-1) = x;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ", *(point+i));

    return 0;
}

