/* Find Minimum from the Array. Access the array using pointer */
#include<stdio.h>
int main()
{
    int i;
    int *min;
    int array[100] = {7, 6, 5, 8, 33, 7, 44, 77, 22,30};
    int size = 10;
    min = &array[0];
    for(i=0; i<size; i++)
    {
        printf("%d ",*(min+i));
    }
    printf("\n");

    for(i=1; i<size; i++)
    {
        if(*(min+i)<*min)
            *min = *(min+i);
    }
    printf("Minimum : %d\n",*min);

    return 0;
}

