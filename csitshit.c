#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>



void calculator();
void delay(int ms); 
void binary();
void pattern();
void grades();
void convert();
void bitch();

int main(){
int ask;
int rep = 1;
while(rep == 1){

delay(250);
system("cls");
delay(100);
system("Color F0");

delay(250);
printf("\n\n[1]Basic Calculator\n\n[2]Triangle Pattern Generator\n\n[3]Grading Sytem\n\n[4]Decimal to Binary Converter\n\n[5]Number to Word Converter\n\n[6]Surprise!\n\nChoose a program you want to execute: ");
scanf("%d", &ask);

if(ask == 1){
    delay(200);
    system("cls");
    calculator();
} else if( ask == 2){
    delay(200);
    system("cls");
    pattern();
} else if (ask == 3){
    delay(200);
    system("cls");
    grades();
} else if (ask == 4){
    delay(200);
    system("cls");
    binary();
} else if(ask == 5){
    delay(200);
    system("cls");
    convert();
} else if (ask == 6){
    delay(200);
    system("cls");
    bitch();
}
printf("\n\nPress [1] to return to main: \n\n");
scanf("%d", &rep);

} 
return 0;
}



void calculator(){
int operation, n1, n2;
    
    printf("\t\t\t\t\t============CALCULATOR==============\n");
    printf("\t\t\t\t\t\tChoose Operator\n");
    printf("\t\t[1]Addition\t\t[2]Subtraction\t\t[3]Division\t\t[4]Multiplication\n\n");
    
    do{
    printf("Enter Operator: ");
    scanf("%d", &operation);
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    
        switch(operation){
            case 1:
            printf("======================");
            printf("\n%d + %d = %d", n1, n2,(n1+n2));
                break;
            case 2:
                printf("======================");
                printf("\n%d - %d = %d", n1, n2,(n1-n2));
                break;
            case 3:
                printf("======================");
                if(n2 != 0.0)
                printf("\n%d/%d = %d", n1, n2, (n1/n2));
                break;
            case 4:
                
                 printf("======================");
                 printf("\n%d * %d = %d", n1, n2,(n1*n2));
                break;
            default:
                printf("INVALID OPERATOR PLEASE TRY AGAIN\n");
    }
    }while(operation < 1 || operation > 4);
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

void binary(){
    int arr[10], num, i, j;
    
      printf("\t\t\t\t\t============BINARY TO DECIMAL CONVERTER==============\n");

    //Ask for user input
    printf("\nEnter a decimal number: ");
    scanf("%d", &num);
   
    //FORMULA OR PROCESS
    for(i = 0; num > 0; i++)
    {
        arr[i]=num % 2;
        num=num/2;
    }
    //DISPLAYING THE OUTPUT USING ARRAY FUNCTION BY DECREMENTING IT
    printf("\nBinary of the given number is: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]); // PRINT THE OUTPUT
    }
    
}

void pattern(){

    
    int n,m;  
    printf("\t\t\t\t\t============TRIANGLE PATTERN GENERATOR==============\n\n");
    printf("Enter the number of rows: ");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
     
}

void grades(){
    int m1,m2,m3, //MATH	  
		e1,e2,e3, //ENG
		s1,s2,s3; //SCI
		
	int mathave, engave, sciave;

     printf("\t\t\t\t\t============GRADING SYSTEM==============\n\n");
	
	printf("Enter Three Math Grades:   \n");
	scanf("%d %d %d", &m1, &m2, &m3);
	printf("Enter Three Eng Grades:   \n");
	scanf("%d %d %d", &e1, &e2, &e3);
	printf("Enter Three Sci Grades:   \n");
	scanf("%d %d %d", &s1, &s2, &s3);

	
	mathave =(m1+m2+m3)/ 3; // AVERAGE
	engave = (e1+e2+e3)/ 3; // AVERAGE
	sciave = (s1+s2+s3)/ 3; // AVERAGE

		
			if (mathave <= 75){
				printf("Math: %d - FAIL\n", mathave);
			} else if( mathave > 100){
				printf("Invalid\n");
			} else {
				printf("Math: %d - PASS\n", mathave);
			}
			if(engave <= 75) {
				printf("Eng: %d - FAIL\n", engave);
			} else if(engave > 100){
				printf("Invalid\n");
			} else {
				printf("Eng: %d - PASS\n", engave);
			}
			if (sciave <= 75){
				printf("Sci: %d - FAIL\n", sciave);
			} else if (sciave > 100){
				printf("Invalid\n");
			}
			else {
				printf("Sci: %d - PASS\n", sciave);
			} 
	
	}

void convert(){
     int userNum;
    
    
    printf("\t\t\t\t\t============NUMBER TO WORD GENERATOR==============\n\n");

    do{
        printf("Pick or enter one number from 1-8: ");
    scanf("%d", &userNum);
    switch(userNum){
        case 1:
        printf("\nONE\n");
        break;
          case 2:
        printf("\nTWO\n");
        break;
          case 3:
        printf("\nTHREE\n");
         break;
          case 4:
        printf("\nFOUR\n");
        break;
        case 5:
        printf("\nFIVE\n");
        break;
        case 6:
        printf("\nSIX\n");
        break;
        case 7:
        printf("\nSEVEN\n");
        break;
        case 8:
        printf("\nEIGHT\n");
        break;
        
        default:
        printf("\nInvalid Number\n");
    }

    } while(userNum < 1 || userNum > 9);
    
    }

void bitch(){
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
    printf("\n\n\n\nThank you master!\n");
}

