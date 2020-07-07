
/* Update Kth (take input K from user) index with the value
    “X” (take input X from user). And print the whole array */

#include <stdio.h>
int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i,size=12,k,x;
    printf("k index\n");
    scanf("%d",&k);
    printf("x value\n");
    scanf("%d",&x);
    printf("\n");
    for(i=0; i<size; i++){
            if(i==(k-1))
            {
               arr[i]=x;
            }
        printf("%d ", arr[i]);
    }
    return 0;
}
