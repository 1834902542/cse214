//Find Second Maximum from the array
#include<stdio.h>
int main ()
{
    int arr[100] = {8,7,2,1,4,9,3,1,10,5};
    int i,j,max,max2,size = 10;
    max=arr[0];
    for (i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max2 = max;
            max = arr[i];
        }
        else if(max2 < arr[i] && max > arr[i])
        {
            max2 = arr[i];
        }
    }
    printf("\n%d",max2);
    return 0;
}
