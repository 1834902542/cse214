/* Insert a value “X” (take input X from user) in the array at K th (take input K from user)
    index and shift all other value to right. And print the whole array */
#include<stdio.h>
int main()
{
    int arr[100]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int i,x,size=10;
    printf("\n Enter index \n");
    int n;
    scanf("%d",&n);
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=size; i>=n; i--)
    {
        arr[i]=arr[i-1];
    }
    printf("\n Enter k index value new value\n");
    size++;
    scanf("%d",&x);
    arr[n-1]=x;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
