/* Delete a value from K th index (take input K from user) from
    the array shift all other value to left. And print the whole array */

#include <stdio.h>
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i, k, size=12;

    scanf("%d", &k);

    for (i=k-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    for (i=0; i<size-1; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}


