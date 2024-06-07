#include<stdio.h>
#include"age.c"
int main(void) {
    
    int age = getAge();
    display(age);
    return 0;
}