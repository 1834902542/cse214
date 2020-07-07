//Find the minimum from the array
#include<stdio.h>
int main()
{
    int arr[100] = {8,7,2,1,4,9,3,1,10,5};
    int size = 10, i, min;

    min = arr[0];

    for(i = 1; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d",min);

    return 0;
}
