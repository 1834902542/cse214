
/* Search a value “X” (take input X from user) in the array and print
    “Found” if X found in the array otherwise print “Not Found” */

#include <stdio.h>
int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i, x,size=12;
    int count=0;

    scanf("%d", &x);

    for (i=0; i<size; i++){
        if(arr[i]==x){
           count ++;
           }
    }

    if(count==1){
        printf("Found\n");
    }
    else
        printf("Not Found");

    return 0;
}
