#include <stdio.h>
#include <time.h>

void delay(int ms);
void menu();
void input();
void receipt();

char items[][20] ={"RTX 3070 TI", "Ryzen 5 3600", "RTX 2070", "Razer Viper Mini", "RX 6600XT", "RX 6700", "RTX 4080", "RTX 4070", "RTX 4090"};
int prices[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
int orders[99];
char asd[] = "==============";
int sum;

int main() {
    delay(100);
    printf("%s\n\n", asd);
    delay(100);
    printf("--- Zen's PC Parts---");
    delay(150);
    printf("\n\n%s", asd);
    delay(500);
    printf("\n\nWelcome to our shop!\n");
    delay(500);
    printf("Here's our menu:\n");
    delay(500);
    menu();
    printf("\nEnter the number you like to purchase: ");
    delay(500);
    input();
    
    return 0;
}

int length(int *p) { 
	int s = 0; 
   	while(*p != '\0') { 
		s++; 
		p++; 
	} 
	return s; 
} 

void receipt() {
    delay(200);
    int i, sum = 0;
    printf("\n\n#############");
    delay(150);
    printf("\n\tRECEIPT");
    for (i = 0; i < length(orders)-1; i++) {
        sum += prices[orders[i]];
        printf("\n\t\t$%s %d", items[orders[i]], prices[orders[i]]);
        delay(250);
    } 
    delay(500);
    printf("\n\n\t\tThe total amount is: $%d\n", sum);
    delay(500);
    printf("\n\t\t----");
    delay(500);
    printf("\n\t\tEnter Payment: ");
    int pay;
    scanf("%d", &pay);
    delay(500);
    printf("\t\t----");
    delay(500);
    if (pay >= sum) {
        int change = pay - sum;
        printf("\n\n\t\tChange:  $%d\n", change);
    } else {
        int bal = sum - pay;
        printf("\n\n\t\tBalance: $%d\n", bal);
    }
    delay(500);
    printf("#############\n");
    printf("\n\n\n\t\t ===== THANK YOU FOR PURCHASING =====\n\n\n\n");
}

void input() {
    int i;
    while (1) {
        i++;
        int or;
        scanf("%d", &or);
        orders[i -1 ] = or -1;
        printf("Append: %d", orders[i]);
       delay(100);
        if (or == 0) {
            receipt();
            break;
        } else {
            printf("  Added %s to the list.", items[orders[i -1]]);
            printf("\n\nWanna add more? ");
        }
    }
}

void menu() {
    int i;
    for (i = 0; i < 9; i++) {
        printf("%d. %s - $%d\n", i + 1, items[i], prices[i]);
        delay(200);
    }
    printf("Enter '0' to finished the order.\n");
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