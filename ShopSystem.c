#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void delay(int ms);
void menu();
void receipt();
void input();


   
char customer[25];
int sum;
int prices[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
char items[][20] ={"RTX 3070 TI", "Ryzen 5 3600", "RTX 2070", "Razer Viper", "RX 6600XT", "RX 6700", "RTX 4080", "RTX 4070", "Von's Penis"};
int orders[99];
int length(int *p) { 
	int s = 0; 
   	while(*p != '\0') { 
		s++; 
		p++; 
        return s; 
        }
	}  



int main(){

    system("cls");
    delay(200);
    system("color 20");


    
    delay(250);
    printf("****************************************************\n");
    delay(250);
    printf("\n");
    printf("\n\tWhat is your name?: ");
    fgets(customer, 25, stdin);
    customer[strlen(customer)-1] = '\0';  
    delay(250);
    printf("\n\n\tWelcome to our shop, %s!", customer);    
    delay(1000);
    system("cls");

    delay(250);
    printf("****************************************************\n");
    delay(500);
    printf("\n\tPC Part Picker");
    delay(500);
    printf("\n\nHere's our menu, %s\n\n", customer);
    delay(500);
    menu();
    delay(250);
    printf("\n****************************************************\n\n");

    delay(250);
    printf("\nHello %s, What is your order? : ", customer);
    input();
    
    

    delay(1500);
    system("cls");

     delay(600);
     int i,j;
     int n = 6;
    
    
     for(i=0; i<n-2; i++)
           printf("  ");
    
     for(i=0; i<n; i++)  
           printf("* ");
    
     printf("\n");
    
     for(j=0; j<n-2; j++)
     {
           printf("* ");
           for(i=0; i<n-2; i++)
                printf("  ");
           printf("* \n");
     }
    
     for(i=0; i<n*2-1; i++)    
           printf("* ");
     printf("\n");
    
     for(j=0; j<n-2; j++)
     {
           for(i=0; i<=n-2; i++)
                printf("  ");
           printf("* ");
           for(i=0; i<n-2; i++)
                printf("  ");
           printf("* \n");
     }

     for(i=0; i<n; i++)  
           printf("* ");
     for(i=0; i<n-2; i++)
           printf("  ");

    printf("* ");
    delay(500);
    printf("\n\n\n\nYou Just Got Scammed Bitch\n\n\n\n");

    






 return 0;
 
}

void menu() {
    int i;
    for (i = 0; i < 9; i++) {
        printf("%d. %s\t-\t\t$%d\n", i + 1 , items[i], prices[i]);
        
        delay(200);
    }
    printf("\n\nEnter '0' to finished the order.\n");

}
void delay(int ms) {
    long pe;
    clock_t now, then;
    pe = ms * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now-then) < pe) {
        now = clock();
    }

    
} 

void receipt() {
    delay(200);
    int i, sum = 0;
     printf("\n\n==================================================");
    delay(150);
    printf("\n\tRECEIPT FOR %s", customer);
    for (i = 0; i < length(orders)-1; i++) {
        sum = sum+prices[orders[i]];
        printf("\n\t\t$%s %d", items[orders[i]], prices[orders[i]]);
        delay(250);
    }
    sum = sum+prices[orders[i]]; 
    delay(500);
    printf("\n\n\tThe total amount is: $%d\n", sum);
    delay(500);
    printf("\n\t----");
    delay(500);
    printf("\n\tEnter Cash Amount: ");
    int cash;
    scanf("%d", &cash);
    delay(500);
    printf("\t----");
    delay(500);
    
    if (cash >= sum) {
        int change = cash - sum;
        printf("\n\n\tChange:  $%d\n", change);
    } else {
        int bal = sum - cash;
        printf("\n\n\tBalance: $%d\n", bal);
    }
    delay(500);
    printf("==================================================\n");
    printf("\n\n\n ===== THANK YOU FOR PURCHASING: %s =====\n\n\n\n", customer);
}
 void input() {
    int i;
    while (1) {
        i++;
        int or;
        scanf("%d", &or);
        orders[i -1 ] = or -1;
               delay(100);
        if (or == 0) {
            delay(250);
            system("cls");
            delay(250);
            printf("\n\n\tPrinting Receipt...");
            delay(600);
            system("cls");
            receipt();
            break;
        } else {
            printf("\n\nYou chose the %s", items[orders[i -1]]);
            printf("\n\nEnter 0 to proceed: ");
        }
    }
 }





