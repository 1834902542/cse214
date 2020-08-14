/*  Scan N (take input N from user) values from user into an array.
    Access the array using pointer */
#include<stdio.h>
int main()
{
    int *point;
    int i, n;
    printf("Size Of Array : ");
    scanf("%d",&n);
    int array[n];
    point = &array[0];
    for(i=0; i<n; i++)
    {
        scanf("%d",(point+i));
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d ",*(point+i));
    }
    return 0;
}
