#include <stdio.h>


int getNum(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
return num;

}

int compFactorial(int num){
    int ctr;
    int f = 1;
    for(ctr=1; ctr<=num; ctr++){
        f = f*ctr;
    }
    return f;
}

void display(int factorial){
    printf("Factorial: %d", factorial);
    return;
}