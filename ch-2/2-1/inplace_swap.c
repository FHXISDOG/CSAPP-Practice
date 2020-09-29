#include <stdio.h>

void inplace_swap(int *x,int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for(first = 0, last = cnt -1; 
            first < last;
            first ++, last --)
        inplace_swap(&a[first],&a[last]);
}

void printArr(int arr[], int cnt){
    printf("[ ");
    for( int i=0 ; i < cnt ; i++ ) {
        printf("%d ,",arr[i]);
    }
    printf(" ] \n");
}

int main(int argc, char *argv[])
{
    int arr[5] = { 1 , 2, 3, 4, 5 };
    int cnt = sizeof(arr)/sizeof(int);
    printArr(arr, cnt);
    reverse_array(arr,cnt);
    printArr(arr, cnt);
}
