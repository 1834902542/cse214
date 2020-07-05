 //Print entire array each element separated by comma
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
    printf("\nPrint array element by comma\n");
    for(j;j<i; j++)
    {
        printf("%d,",array[j]);
    }
    printf("\n");
    return 0;
}
