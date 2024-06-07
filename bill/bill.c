#include <stdio.h>

void display(int arr[], int size){
    int i;

printf("Enter elements: \n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

}

int getsum(int arr[], int size){

int sum = 0, i;

{
    int i;
    for(i = 0; i < size; i++)
    if(i % 2 == 0)
    {
        sum += arr[i];
    }
printf("sum is : %d", sum);


}

}