#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int s,i,j;
    printf("Enter size: ");
    scanf("%d", &s);
    int *arr = (int*)calloc(s, sizeof(int));

    for(i =0; i < s; i++){
        scanf("%d", arr+i);
    }

    printf("Primes are: ");
    for(i = 0; i < s; i++){
        if(arr[i]==2 && arr[i] != 1){
            printf("%d ", arr[i]);
        }

        if(arr[i]%2==1 && arr[i] != 1){
            printf("%d ", arr[i]);
        }
        
        
    }
    

    






 
    




    
    return 0;
}


 
