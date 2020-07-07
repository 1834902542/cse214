/* Update fifth (5th) index with another value. And print the whole array */
#include <stdio.h>
int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i,size=12;
    for(i=0; i<size; i++){
            if(i==(5-1))
            {
               arr[i]=100;
            }
        printf("%d ", arr[i]);
    }
    return 0;
}

