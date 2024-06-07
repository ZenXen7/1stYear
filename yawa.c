#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void delay(int ms);

void printArray(int *array, int size) {

         for (int i = 0; i < size ; i++) { 
        printf("\n\nOutput: %i", array[i]);
    }
   
}


int main()
    {
        system("cls");
        system("color f4");
        delay(250);
        int i, j, a, n, number[50];
        printf("\nEnter the size of the array:  ");
        scanf("%d", &n);

        delay(250);
        printf("\nEnter the numbers:\n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
             for (j = i + 1; j < n; ++j)
            {
                 if (number[i] > number[j]) 
                {
                     a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                 }
             }
         }
        delay(300);
        system("cls");
        printf("The numbers arranged in ascending order are given below: \n");
        for (i = 0; i < n; ++i)
        {
            delay(250);
            printf("%d\n\n", number[i]);
        }
 
 return 0;


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