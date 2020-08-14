/* Find Minimum from the Array. Access the array using pointer */
#include<stdio.h>
int main()
{
    int i;
    int *max;
    int array[100] = {7, 6, 5, 8, 33, 7, 44, 77, 22,30};
    int size = 10;
    max= &array[0];
    for(i=0; i<size; i++)
    {
        printf("%d ",*(max+i));
    }
    printf("\n");

    for(i=1; i<size; i++)
    {
        if(*(max+i)>*max)
            *max = *(max+i);
    }
    printf("Maximum : %d\n",*max);

    return 0;
}


