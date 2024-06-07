#include <stdio.h>

int getAge(){
    int age;
    printf("What is your age: ");
    scanf("%d", &age);
    return age;
}

void display(int age){
    if(age >= 60)
        printf("Senior Citizen");
    else if(age >= 18 && age <= 59)
        printf("Adult");
    else if(age >= 13 && age <= 17)
        printf("Teenager");
    else if(age >= 0 && age <= 12)
        printf("Child");

    return;
}