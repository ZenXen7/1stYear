#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



void delay(int ms);

void printArray(int *array, int size) {

         for (int i = 0; i < size ; i++) { 
        delay(250);
        printf("\n\nOutput: %i", array[i]);
    }
   
}



int main() {
    int count;
    
    system("cls");
    system("color f4");
    delay(250);
    printf("Enter the size of the array: ");
    scanf("%d", &count);
  
    
    system("cls");


    
    int *array  = malloc(count * sizeof(*array)); 
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < count; i++) scanf("%d", &array[i]);
    delay(250);
    system("cls");
    

    delay(250);
    printArray(array, count);

    }

    void delay(int ms) {
    long pe;
    clock_t now, then;
    pe = ms * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now-then) < pe) {
        now = clock();
    }
}



 
