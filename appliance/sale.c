#include <stdio.h>
int getType()
{
    int type;
    printf("Enter the type of the appliance [1] - [4]: ");
    scanf("%d", &type);
    return type;
}
float getPrice()
{
    float price;
    printf("Enter the price of the appliance: ");
    scanf("%f", &price);
    return price;
}
void compCom(int* type, float* price, float* com){
    float icom;
    if(*type == 1){
        icom = 0.07 * *price;
        if(icom > 400)
        *com = icom;
        else
        *com = 400;
        }else if(*type == 2){
            icom = 0.1 * *price;
            if(icom<900)
            *com = icom;
            else
            *com = 900;

        }else if(*type == 3)
        *com = 0.12 * *price;
        else
        *com = 250;
        return;
    }

void display(float* com){
    printf("The commission is %.2f", *com);
    return;
}