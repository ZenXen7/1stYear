#include<stdio.h>
#include<windows.h>
#include <stdlib.h>

int main(){

   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);

   int *arr = (int*)malloc(size*sizeof(int));

   printf("Enter elements:\n");
   for(int i = 0; i < size; i++){
      scanf("%d", &arr[i]);
   }

   for(int i = 0; i < size; i++){
      for(int j = i + 1; j < size; j++){
         if(arr[j] < arr[i]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
   printf("Sorted in ascending order:\n");
   for(int i = 0; i < size; i++){
      printf("%d ", arr[i]);
   }

   free(arr);

}