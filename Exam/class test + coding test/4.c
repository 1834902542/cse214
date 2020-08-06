#include<stdio.h>
int main()
{
    int arr[10] = {8,7,2,1};
    int *a=arr;
    int size=4,i=0,sum = 0,count=0;
    float avg;
    for(i;i<size;i++)
    {
        sum += *(a+i);
        count++;
    }
    avg=sum/count;
    printf("%f",avg);

    return 0;
}
