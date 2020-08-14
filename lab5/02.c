/* Scan values from user into an array until end of file.
    Access the array using pointer */
#include<stdio.h>
int main()
{
    int *point;
    int i=0, n,count=0;

    int array[100];
    point = &array[0];
    while(scanf("%d",(point+i))!=EOF)
    {
        i++;
        count++;
    }
    printf("\n");

    for(i=0; i<count; i++)
    {
        printf("%d ",*(point+i));
    }
    return 0;
}
