/*Insert a value X[take input X from user] in the array at the end of currently stored elements*/
#include<stdio.h>
int main(){
int array[100]={1,2,3,4,5,6,7,8,9,10};
int i,n,size=10;
for(i=0 ;i<size ; i++)
{
    printf("%d ",array[i]);
}
printf("\nEnter array next index value input\n ");
scanf("%d",&n);
array[size]=n;
size++;
printf("\n");
for(i=0 ;i<size ; i++)
{
    printf("%d ",array[i]);
}
return 0;
}
