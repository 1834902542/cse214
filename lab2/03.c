/*Insert a value X[take input x from user] in the array at third(3th)index and shift all other value to right.And print the whole array*/
#include<stdio.h>
int main(){
int arr[100]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int i,x,size=10;
int n=3;
for(i=0; i<size; i++)
{
    printf("%d ",arr[i]);
}
for(i=size; i>=n; i--){
    arr[i]=arr[i-1];
}
printf("\n 3 index value new value insert\n");
size++;
scanf("%d",&x);
arr[n-1]=x;
for(i=0; i<size; i++)
{
    printf("%d ",arr[i]);
}

return 0;

}
