
#include <stdio.h>

int input(int arr[], int size){


    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
}

int findMostFrequentNumber(int arr[], int size)
{
    int maxCount = 0;
    int maxNumber = 0;
    
    for (int i = 0; i < size; i++) 
    {int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxNumber = arr[i];
        }
    }

    return maxNumber;
}

int display(int arr[], int size)
{
    int mostFrequent = findMostFrequentNumber(arr, size);
    printf("The most frequent number in the array is:  %d", mostFrequent);
}