//Calculate the summation of all elements of the given array
#include<stdio.h>
int main()
{
    int arr[100] = {8,7,2,1,4,9,3,1,10,5};
    int size=10,i=0,sum = 0;

    for(i;i<size;i++)
    {
        sum +=arr[i];
    }
    printf("%d",sum);

    return 0;
}
