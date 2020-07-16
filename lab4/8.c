//Cyclically permute the elements of an array

#include<stdio.h>
void print_array(int a[], int size);

int main(){
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size_a = 10, capacity_a = 10;
    int i, temp;

    print_array(array, size_a);
    for(i=0; i<size_a-1; i++){
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }
    print_array(array, size_a);

    return 0;
}

void print_array(int array[], int size){
    int i;
    if(size==0){
        printf("Array Empty\n");
    }
    else{
        for(i=0;i<size;i++){
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}

