//Calculate first 92 fibonacci and store those in an array
#include<stdio.h>
int main()
{
    int arr[100];
    int n=92, i;
    int fibo;
    int f=0,s=1;
    for(i=0;i<n;i++)
    {
        arr[i] = f;
        fibo = f + s;
        f = s;
        s = fibo;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);;
    }
    return 0;
}

