#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <conio.h> 



int main (){



    /*
    printf("\"I like Pizza\" - Von\n"); 
    printf("It's\treally\t good\t!\n");\
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
    */

   /* int x; 
   x  = 123; 
   int y = 321;

   int age = 21; 
   float gpa = 4.8;
   char grade = 'B';
   char name[] = "Zen";
   
   printf("Hello %s\n", name);
   printf("You are %d years old\n",age);
   printf("Your average grade is %c\n", grade);
   printf("Your gpa is %f\n",gpa);

   
   // DATA TYPES

   float c = 3.141592653589793;     // 4 bytes (32 bits) 6-7 digits %f
   double d = 3.141592653589793;    // 8 bytes (64 bits of precision) 15-16 digits %lf
   bool e = true;                   // 1 byte (true or false) %d
   char f = 120;                    // 1 byte (-128 to +127) %d or %c
   unsigned char g = 255;           // 1 byte (0 to +255) %d or %c
   short int h = 32767;             // 2 bytes (-32,768 to +32,767) %d
   unsigned short int i = 65535;    // 2 bytes (0 to +65,535) %d
   int j = 2147483647;              // 4 bytes %d 
   unsigned int k = 4294967295;     // %u
   long long int l = 9000000000000000;              // 8 bytes (-9 quintillion to +9 quintillion) %lld
   unsigned long long int m = 18000000000000000;    // 18 quintillion %llu
   


   printf("%0.15f\n", c);
   printf("%0.15lf\n", d);
   printf("%d\n", e);
   printf("%c\n", f);
   printf("%d\n", g);
   printf("%d\n", h);
   printf("%d\n", i);
   printf("%d\n", j);
   printf("%u\n", k);
   printf("%lld\n", l);
   printf("%llu\n", m);

   */

  // FORMAT SPECIFIERS 

  // %c = character
  // %s = string 
  // %f = float
  // z` = double
  // %d = integer

  // %.1 = decimal precision
  // %1 = minimum field width 
  // %- = left allign 

  /*
  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%8.2f\n", item1);
  printf("Item 2: $%8.2f\n", item2);
  printf("Item 3: $%8.2f\n", item3);
  
  
  // CONSTANTS

  const float PI  = 3.14159;

  PI = 420.69;
  
  printf("%f", PI);

  
 
  // ARITHMETIC OPERATORS

  // + (addition)
  // - (subtraction)
  // * (multiplication)
  // / (division)
  // % (modulus) remainder
  // ++ increment
  // -- decrement

      //int x = 5;
      //int y = 2;

      //float z = x / (float) y;
      //printf("%.2f", z); 

      //int z = x % y;
      //printf("%d", z);


      int x = 5;
      int y = 2;

      x++;
      y--;

      printf("%d", y);

      

     // Augmented Assignment Operators = used to replace a statement where
     //                                  an operator takes a variable as 
     //                                  one of its arguments an then assigns the same result
     //                                  x = x + 1, x+=1

     int x = 10;

     x+=5;

     printf("%d", x);

      

     // USER INPUT 


     char name[25] ; //bytes
     int age;

     printf("\nWhat is your name? : ");
     //scanf("%s", name);
     fgets(name, 25, stdin);
     name[strlen(name)-1] = '\0';      
     
     printf("\nHow old are you? : ");
     scanf("%d", &age);
    
     printf("\nHelo %s, how are you?", name);
     printf("\nYou are %d years old", age);

    

     // MATH FUNCTIONS

     double A = sqrt(9); 
     double B = pow(2, 4);
     int C = round(3.14);
     int D = ceil(3.14);
     int E = floor(3.99);
     double F = fabs(-100);
     double G = log(3);
     double H = sin(45);
     double I = cos(45);
     double J = tan(45); 
     
           
    
     printf("\n%lf", A);
     printf("\n%lf", B);
     printf("\n%d", C);
     printf("\n%d", D);
     printf("\n%d", E);
     printf("\n%lf", F);
     printf("\n%lf", G);
     printf("\n%lf", H);
     printf("\n%lf", I);
     printf("\n%lf", J)
     

      
     // CIRCLE CIRCUMFERENCE 

     const double PI = 3.14159;
     double radius;
     double circumference;
     double area;

     printf("\nEnter radius of a circle: ");
     scanf("%lf", &radius);

     circumference = 2 * PI * radius;
     area = PI * radius * radius;

     
     printf("\ncircumference: %.2lf", circumference);
     printf("\narea: %.2lf", area);

     
     // HYPOTENUSE 

     double A;
     double B;
     double C;

     printf("Enter side A: ");
     scanf("%lf", &A);

     printf("Enter side B: ");
     scanf("%lf", &B);

     C = sqrt(A*A + B*B);

     printf("Side C: %.2lf", C );

      
     // IF AND ELSE IF 

     int age;
     printf("\nEnter your age: ");
     scanf("%d", &age);

     if(age >= 18){
        printf("You are now signed up!");

     } 

     else if (age == 0){
        printf("You were just born!");
     }
     else if(age < 0){
        printf("You haven't been born yet!");

     } 
     else{
        printf("You are not eligible");
     }

     
     
     // SWITCH STATEMENTS

     char grade;

     printf("\nEnter a letter grade: ");
     scanf("%c", &grade);

     switch(grade){
        case 'A': 
            printf("Perfect!\n");
            break;
        case 'B': 
            printf("Good!\n");
            break;
        case 'C': 
            printf("Okay!\n");
            break;
        case 'D': 
            printf("Bad!\n");
            break;
        case 'F': 
            printf("Really Bad!\n");
            break;
        default:
            printf("Please enter valid grade\n");

      
     }
      
     
     // METER TO FEET CALCULATOR AND VICE VERSA
     char unit;
     double height; 

     printf("\nConvert to (F) or (M)? : ");
     scanf("%c", &unit);

     unit = toupper(unit);

     if(unit == 'F'){
        printf("\nEnter your height in meters : ");
        scanf("%lf", &height);
        height = (height * 3.28084);
        printf("\nYour height is %.5lf feet.", height);
        
    }
     else if(unit == 'M'){
        printf("\nEnter your height in feet : ");
        scanf("%lf", &height);
        height = (height * 0.3048);
        printf("\nYour height is %.5lf meters.", height);
    }
     else {
        printf("\n %c is not a valid unit of measurement", unit); 
    }

     
     
     // CALCULATOR PROGRAM

     char operator;
     double num1;
     double num2;
     double result;

     printf("\nEnter an operator (+ = * /): ");
     scanf("%c", &operator);

     printf("Enter number 1: ");
     scanf("%lf", &num1);

     printf("Enter number 2: ");
     scanf("%lf", &num2);

     switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nresult : %lf ", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nresult : %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult : %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nresult : %lf", result);
            break;
        default:
            printf("%c is not a valid operator", operator);
            
    

     // LOGICAL OPERATORS 

     // && AND = checks if the two conditions are true

     float temp = 25;
     bool sunny = true;
     if (temp >= 0 && temp <= 30 && sunny){

        printf("\nThe weather is good!");
     }
     else {
        printf("\nThe weather is bad!");
     }

     

     // || OR = checks if at least one condition is true

     float temp = 31;
     
     if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
     }
     else {
        printf("\nThe weather is good");
     }

     
     
     // ! NOT = reverses the state of a condition

     
     bool sunny = true;

     if(!sunny){
        printf("\nIt is sunny outside!");
     } 
     else{
        printf("\nIt is cloudy outside!");
     }         
     

     // FUNCTION

     void birthday() // BEFORE MAIN
     {
        printf("\nHappy Birthday to you!");
        printf("\nHappy Birthday to you!");
        printf("\nHappy Birthday to you!\n");
     }

     int main()
     {
        birthday();
        birthday();
        birthday();

     }
       

      int love;
      char person[25];

      printf("\nWho do you love? ");
      scanf("%s", person);

      printf("\nHow much do you love %s on a scale of 1 - 5?: ", person);
      scanf("%d", &love);

      if (love == 5){
         printf("You really love %s!", person);
      }

      else if (love == 4){
         printf("You love %s!", person);
      }
      else if (love == 3){
         printf("You like %s!", person);
      }
      else if (love == 2){
         printf("You don't like %s!", person);
      }
      else if (love == 1){
         printf("You hate %s!", person);
      }
      else {
         printf("What are you saying?");
      }

     // LOGIN SYSTEM 

    char username[15]; 
    char password[15]; 
 
 
    printf("\nEnter your username: "); 
    scanf("%s",&username); 
 
    printf("\nEnter your password: "); 
    scanf("%s",&password); 
 
    if(strcmp(username,"gaysex123")==0){ 
        if(strcmp(password,"vonisgay123")==0){ 
 
        printf("\nWelcome. \nLogin Success!"); 
 
 
        }else{ 
    printf("\nWrong password"); 
} 
    }else{ 
    printf("\nUser doesn't exist"); 
} 
 
  

   // ARGUMENTS AND PARAMETERS
   
   void birthday(char name[], int age) // BEFORE MAIN
    {
   printf("\nHappy Birthday Dear %s!", name);
   printf("\nYou are now %d years old!", age);
    }

    char name[] = "Zen";
    int age = 21;

    birthday(name, age);

     

    // RETURN STATEMENT

    double square(double x) // BEFORE MAIN
      {
 
      return x * x;
      }

    double x = square(3.14);
    printf("%lf", x);

      

     // Ternary Operator = shortcut to if/else when assigning a value
     // (condition) ? value if true: value if false
     
      int findMax(int x, int y) // BEFORE MAIN
      {
            return (x > y) ? x : y;
      }

     int max = findMax(3, 4);
     printf("%d", max);

     

    // FUNCTION PROTOTYPES

    // WHAT IS IT?
    // function declaration, w/o a body, before main()
    // ensures that calls to a function are made with the correct arguments
   
    void hello(char[], int); // before MAIN
    
    char name[] = "Zen";
    int age = 18;

    hello(name, age);
      
   void hello(char name[], int age) // after MAIN
     {
   printf("\nHello %s", name);
   printf("\nYou are %d years old", age);

     }

     
    
    // STRING FUNCTIONS

      //strlwr(string1);        // converts a string to lowercase
      //strupr(string1);        // converts a string to uppercase
      //strcat(string1, string2);   // appends string2 to the end of string 1
      //strncat(string1, string2, 1);  // appends n characters from string2 to string1
      //strcpy(string1, string2);      // copy string2 to string1
      //strncpy(string1, string2, 4);  // copy n characters of string 2 to string 1


      //strset(string1, '?');       // sets all characters of a string to a given character
      //strnset(string1, 'x', 1);  //sets first n characters of a string to a given character
      //strrev(string1);           // reverses a string


      //int result = strlen(string1); // returns string length as int
      //int result = strcmp(string1, string2); // string compare all characters
      //int result = strncmp(string1, string2, n); // string compare n characters
      //int result = strcmpi(string1, string2); // string compare all (ignore case)
      //int result = strnicmp(string1, string2 , 1); // string compare n characters (ignore case)
      

     int a, b, c, d;

   
     int total;
     

   printf("\nEnter a: ");
     scanf("%d", &a);
   printf("\nEnter b: ");
     scanf("%d", &b);
   printf("\nEnter c: ");
     scanf("%d", &c);
   printf("\nEnter d: ");
     scanf("%d", &d);

     total = a + b + c + d;

     printf("%d is the total", total);
     
     

    // FOR LOOPS = repeats a section of code a limited amount of times

    for(int i = 1; i <= 20; i+=2)
      {
         printf("%d\n", i);
      }
    
    

    // while loop = repeats a section of code possibly unlimited times. 
    // WHILE some condition remains true
    // a while loop might not execute at all
    
    char name[25];

    printf("\nWhat is your name? : ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
      {
        printf("\nYou did not enter your name");
        printf("\nWhat is your name? : ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
      }
    

    printf("Hello %s", name);


    
    
    // do while loop = always execute a block of code, then checks a condition

    int number = 0;
    int sum = 0;

    
    do{
      printf("\nEnter a number above 0: ");
      scanf("%d", &number);
      if(number > 0)
      {
         sum += number;
      }
    }while(number > 0);

    printf("the sum is %d", sum);

    

    // nested loop = a loop inside of another loop
    // column and rows

    int rows;
    int columns;
    char symbol;

    printf("\nEnter a number of rows: ");
    scanf("%d", &rows);

    
    printf("\nEnter a number of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);


    for(int i = 1; i <= rows; i++)
   {
      for(int j = 1; j <= columns; j++)
      {
         printf("%c", symbol);
      }
      printf("\n");
   }

      
      // continue
    
    for(int i = 1; i <= 20; i++)
    {
      if (i == 13)
      {
         continue; // break
      }
      printf("%d\n", i);

    
    // ARRAY 

    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};

    printf("$%.2lf", prices[4]); 

    

    // ARRAY with loop
    
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0};
    
       for(int i = 0; i < sizeof(prices)/sizeof(prices[0]) ; i++)
    {
     printf("$%.2lf\n", prices[i]); 
    }

    
    // 2D Array

    int numbers[2][3] = {
                        {1, 2, 3}, 
                        {4, 5, 6}
                        };
   

    int numbers[3][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    numbers [0][0] = 1;
    numbers [0][1] = 2;
    numbers [0][2] = 3;
    numbers [1][0] = 4;
    numbers [1][1] = 5;
    numbers [1][2] = 6;
    numbers [2][0] = 7;
    numbers [2][1] = 8;
    numbers [2][2] = 9;

    for (int i = 0; i < rows; i++)
    {
      for(int j = 0; j < columns; j++)
      {
         printf("%d ", numbers[i][j]);
      }
      printf("\n");

    

    // Array of Strings

    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
      printf("%s\n", cars[i]);
    }

    
    
    // SWAP TWO VARIABLES IN C
    
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x =  %s\n", x);
    printf("y =  %s\n", y);
      
   
 // SORT AN ARRAY

   void sort(int array[], int size)
{
   for(int i = 0; i < size - 1; i++)
   {
      for(int j = 0; j < size - i - 1; j++)
      { 
           if(array[j] > array[j+1])
         {
           int temp = array[j];
           array[j] = array[j+1];
           array[j+1] = temp;
   
        }
      } 
   }
}


void printArray(int array[], int size)
{
   for(int i = 0; i < size; i++)
   {
      printf("%d", array[i]);
   }
}

    int array[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

     

    // RANDOM SHIT ADDING FOR LOOP NUMBERS
    int j, sum = 0;
    
    

    for(j = 1; j <= 10; j++)
    {
      sum = sum + j;
      printf("%d", j);
    }

    printf("\nThe sum is %d", sum);


   
      // STRUCT 

   struct Player // BEFORE MAIN
{
   char name[12];
   int score;
};
     
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Zen");
    player1.score = 4;

    strcpy(player2.name, "Xen");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);
    
    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    */

      


    
    
    
    
    






    
    return 0;

       
   }

    
     

    

