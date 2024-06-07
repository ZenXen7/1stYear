#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

typedef struct Student {
    char name[50];
    char section[50];
    int age;
    float gpa;
    int balance;
    
} student;



// really basic student login system

int main(){
char login;
char names;
char username[8] = "jeth123";
char username1[8] = "cody123";
char username2[8] = "karl123";
char username3[8] = "deo123";

student jeth;
    jeth.age = 19;
    jeth.gpa = 4.6;
    jeth.balance = 4250;

student cody;
    cody.age = 21;
    cody.gpa = 4.3;
    cody.balance = 100000;

student kc; 
    kc.age = 18;
    kc.gpa = 5.0;
    kc.balance = 200;

student deo;
    deo.age = 19;
    deo.gpa = 4.7;
    deo.balance = 200;




    system("cls");
    system("Color 70");
    printf("\nEnter your username: ");
    scanf("%s", &login);
    
    
    
    
    if(strcmp(&login, username)==0){
    
    strcpy(jeth.section, "BSCS - 1, F3");
    strcpy(jeth.name, "Jeth Omictin");
    system("cls");
    printf("\nName: %s\n", jeth.name);
    printf("\nSection: %s\n", jeth.section);
    printf("\nAge: %d\n", jeth.age);
    printf("\nGPA: %.2f\n", jeth.gpa);
    printf("\nBalance: %d\n\n", jeth.balance);
    }
    else if(strcmp(&login, username1)==0){
    strcpy(cody.section, "BSCS - 1, F3");
    strcpy(cody.name, "Cody Chavez");
    system("cls");
    printf("\nName: %s\n", cody.name);
    printf("\nSection: %s\n", cody.section);
    printf("\nAge: %d\n", cody.age);
    printf("\nGPA: %.2f\n", cody.gpa);
    printf("\nBalance: %d\n\n", cody.balance);
    }
    else if(strcmp(&login, username2)==0){
    strcpy(kc.section, "BSCS - 1, F3");
    strcpy(kc.name, "Karl Christian Ajero");
    system("cls");
    printf("\nName: %s\n", kc.name);
    printf("\nSection: %s\n", kc.section);
    printf("\nAge: %d\n", kc.age);
    printf("\nGPA: %.2f\n", kc.gpa);
    printf("\nBalance: %d\n\n", kc.balance);
    }
    else if(strcmp(&login, username3)==0){
    strcpy(deo.section, "BSCS - 1, F3");
    strcpy(deo.name, "Deo Talip");
    system("cls");
    printf("\nName: %s\n", deo.name);
    printf("\nSection: %s\n", deo.section);
    printf("\nAge: %d\n", deo.age);
    printf("\nGPA: %.2f\n", deo.gpa);
    printf("\nBalance: %d\n\n", deo.balance);

    }

    else if(strcmp(&login, username) != 0 || (strcmp(&login, username1)!=0 || (strcmp(&login, username2)!=0 ))){
        system("cls");
        printf("\nInvalid!\n\n");
    }
    


    





return 0;

}