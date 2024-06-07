#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void delay(int ms);

typedef struct User{

    float grade;
    int balance;
    char email[200];


}USER;


int main(){

int a, b;
char user[30];
char username1[30] = "karl123";
int userinput;

USER user1; 
    user1.grade = 4.7;
    user1.balance = 203;
    




delay(200);
system("cls");
system("color 20");

delay(250);
printf("\nEnter your designated username: ");
fgets(user, 25, stdin);
user[strlen(user)-1] = '\0';


delay(250);
printf("\n\t%s: is your chosen username\n", user);

if(strcmp(user, username1)==0){
        printf("\n[1]: Check Grades\t [2]: Check Balance\t [3]: Check Email\n");
        
        printf("\t\t\t");
        scanf("%d", &userinput);

        if(userinput == 1){
            printf("\n\tYou have chosen option %d", userinput);
            delay(800);
            system("cls");
            printf("\n\n\tYour grades are: %.2f\n\n", user1.grade);
        }
        else if(userinput == 2){
            printf("\n\tYou have chosen option %d", userinput);
            delay(800);
            system("cls");
            printf("\n\tYour balance is %d", user1.balance);
        }
        else if(userinput == 3){
            printf("\n\tYou have chosen option %d", userinput);
            delay(800);
            system("cls");
            strcpy(user1.email, "karlchristianajero@gmail.com");
            printf("\nEmail: %s\n", user1.email);
        }
    }
    else{
        system("cls");
        printf("\n\tUser not found.");
    }
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