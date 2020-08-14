/* Scan values from user into an array until user input is 0 (Zero).
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
        if(*(point+i)==0)
            break;
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

