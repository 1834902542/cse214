/*Insert any value at tenth[10th] index of array,And print the whole array*/
#include <stdio.h>
int main()
{
    int array[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int i,n=11,size=10;
    size=sizeof(array)/4;
    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array[9]=n;
    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
