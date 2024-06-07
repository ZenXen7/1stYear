#include <stdio.h>

int main(){

    int s, sum;
    
    int i, j;
  
    int find = 0;

    printf("Enter size of the array: ");
    scanf("%d", &s);
    int arr[s];

    printf("Input elements in the array: \n");
    for(int i = 0; i < s; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }


    printf("Unique elements:");
   for (int i = 0; i < s; i++) {
        int count = 0;
        for (int j = 0; j < s; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            find = 1;
            printf("%d ", arr[i]);
        }
        
      
    }
    if(!find){
        printf("\nThere are no unique elements\n");
    }else{
        printf("\nThere are unique elements.");
    }
    
        printf("\n");
    
     

    
    return 0;
}


 
