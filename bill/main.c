#include <stdio.h>
#include"bill.c"


#include <stdio.h>

int main(){
    
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    display(arr, size);

    getsum(arr, size);
    
    
}