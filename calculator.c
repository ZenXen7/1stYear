#include<stdio.h>
#include<string.h>
#include<math.h>


void add2();
void add();
void sub();
void mult();
void div();

int num1, num2;
int operator;
int equals[30];
int rep = 0;
int end = 1;
int sum2;
int main(){



printf("\nEnter number: ");
scanf("%d", &num1);

while(rep == 0)
{
    printf("\nEnter another number: ");
    scanf("%d", &num2);
    printf("\nEnter the operator you want to use: [1] Addition, [2] Subtraction, [3] Multiplication, [4] Division: \n");
    scanf("%d", &operator);
    {
        if(operator == 1){
        equals[0] = num1+num2;
        printf("\n%d is the sum\n", equals[0]);
        add2();
        }
        if(operator == 2){
        equals[0] = num1-num2;
        printf("\n%d is the difference\n", equals[0]);
        }
        if(operator == 3){
        equals[0] = num1*num2;
        printf("\n%d is the product\n", equals[0]);
        }
        if(operator == 4){
        equals[0] = num1/num2;
        printf("\n%d is the quotient\n", equals[0]);
        }
        
    }
    printf("\nPress '0' to continue: ");
    scanf("%d", &rep);

    
}
return 0;

}



void add2(){

    sum2 = equals[0] + num2;
    printf("%d is the sum", sum2);

}







