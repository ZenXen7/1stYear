#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void swap(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high){
    int index = low + (rand() % (high - low));
    if(index != high){
        swap(&arr[index], &arr[high]);
    }
    int value = arr[high];
    int i = low;
    for(int j = low; j < high; j++){
        if(arr[j] <= value){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);  
return i;
}

void quicksort_rec(int arr[], int low, int high){
    if(low < high)
    {
    int index = partition(arr, low, high);
    quicksort_rec(arr, low, index - 1);
    quicksort_rec(arr, index + 1, high);
    }
}
void quicksort(int arr[], int length)
{
    srand(time(NULL));
    quicksort_rec(arr, 0, length - 1);

}



int main(){
    
    int length;
    printf("Enter the size of array: ");
    scanf("%d", &length);

    int arr[length];
    printf("Enter the values of the array:\n");
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted: \n");
    for(int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, arr[i]);
    }
    
    quicksort(arr, length);
    
    printf("\nSorted: \n");
    for(int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, arr[i]);
    }
    
return 0;
}

