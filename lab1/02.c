/*Scan value from user into an array until end of file*/
#include <stdio.h>
int main()
{
    int array[100];
    int i=0,j;
    printf("Inter store data (max array size 100)\n");
    while(scanf("%d",&array[i])!=EOF)
    {
        i++;
    }
    for(j=0; j<i; j++)
    {
        printf("%d ",array[j]);
    }
    return 0;
}
