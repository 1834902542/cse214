 /*Print  the array elements in reverse order . Each elements should be separated by space */

#include<stdio.h>
int main()
{
    int array[100];
    int i=0,j=0,n;
    printf("Arrat size (max 100)\n");
    scanf("%d",&n);
     printf("Enter store value\n");
    for(i; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Print Array Element reveres oder.\n");
    for(j=n-1; j>=0; j--)
    {
        printf("%d ",array[j]);
    }
    printf("\n");
    return 0;
}
