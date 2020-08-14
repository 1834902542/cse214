/*  Update Kth (take input K from user) index with the value “X”
    (take input X from user). And print the whole array. Access
    the array using pointer */
#include<stdio.h>
int main()
{
    int *point;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int i, x, y;
    printf("Inter new update value : ");
    scanf("%d",&x);
    printf("Inter position : ");
    scanf("%d",&y);
    point = array;
    for(i = y-1; i <size; i++)
    {
        *(point+i)= x;
        break;
    }
    printf("\n");
    for(i = 0;i<size;i++)
    {
        printf("%d ",*(point+i));
    }
    return 0;
}
