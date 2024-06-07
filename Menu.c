#include <stdio.h>
 
int main()
{
    int Order;
   
    printf("============\n");
    printf("[1] Humba\n[2] Shabu\n[3] Pancit\n[4] Pizza\n[5] Yawa\n");
    
    printf("============\n");

                printf("What is your order? : ");
    scanf("%d",&Order);
                 switch(Order)
    {
        case 1:
                    printf("Your order is Humba.");
            break;
        case 2:
                   printf("Your order is Shabu.");
            break;
    	case 3:
                   printf("Your order is Pancit.");
                   break;
        case 4:
                   printf("Your order is Pizza.");
                   break;
        case 5:
                   printf("Your order is Yawa.");
                   break;
       
                           
       default:
            printf("Not on the menu.");
    }
	
    
}
