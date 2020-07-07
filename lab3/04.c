//Find Second Maximum from the array
#include<stdio.h>
int main ()
{
    int arr[100] = {8,7,2,1,4,9,3,1,10,5};
    int i,j,min,min2,size = 10;
    min=arr[0];
    for (i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min2 = min;
            min = arr[i];
        }
        else if(min2 > arr[i] && min < arr[i])
        {
            min2 = arr[i];
        }
    }
    printf("%d\n",min2);
    return 0;
}

