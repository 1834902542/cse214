/* Delete a value “X” (take input X from user) from
    the array shift all other value to left. If “X”
    is not present in the given array print Element
    Not Found. Only delete the first occurrence of
    the value. And print the whole array */
#include<stdio.h>
int main ()
{
    int arr[100]= {1,2,3,4,5,6,7,8,9,10};
    int i, j, x,count=0, size=10;
    scanf("%d",&x);
    for(i=0; i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n\n");

    for(j=0;j<size;j++){

        if(x==arr[j]){

            for(i=x-1;i<=size;i++){
                arr[i] = arr[i+1];
            }
            count++;
        }
    }
    count--;
    if(count!=1)
    {
        printf("Element Not Found\n");
    }
    else
    {
        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

