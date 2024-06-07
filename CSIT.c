#include<stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <conio.h> 


int main() {
    /*
    int x=11;
    int y=1;
    
    //Create a code that will print Hello if the num is  greater than 10
    if (x > 10)
    {
        printf("Hello");
    }

    if (x > 10 && y > 10)
    {
    printf("\nHello Hello");
    }

    if ( x < 10)
    {
    printf("\nWorld");
    }

   //  NUMBER 1 CSIT121

   int num1; 
   int num2;

   printf("\nEnter number 1: ");
   scanf("%d", &num1);

   printf("\nEnter number 2: ");
   scanf("%d", &num2);

   if (num1 == num2)
   {
    printf("\nThe two numbers are equal!");
   }
   else
   {
    printf("\nThe two numbers aren't equal!");
   }
   
    // NUMBER 2

   int num;
   

   printf("\nEnter a number: ");
   scanf("%d", &num);

   if (num % 2 == 0)
   {
    printf("The number is Even!");
   }
   else 
   {
    printf("The number is not Even!");
   }

    //  NUMBER 3

   int purchase;
   float discounted;

   printf("\nHow much is your total purchase? : ");
   scanf("%d", &purchase);
   discounted = purchase-(purchase*.10);

   if (purchase >= 1000)
   {
    printf("\nYou get a 10 percent discount!");
    printf("\nYour total bill is %f", discounted);
   }
   if (purchase < 1000)
   {
    printf("\nYou do not get a discount!");
   }

    
   // NUMBER 4

   int num;
   

   printf("\nEnter a number: ");
   scanf("%d", &num);

   if (num % 2 == 0)
   {
    printf("The number is Even!");
   }
      else 
   {
    printf("The number is Odd");
   }

   

  char string1[] = "Male";
  char string2[] = "Female";

  printf("\nWhat is your gender? Male or Female? :");
  scanf("%s", string1, string2);
  

  int result = strncmp(string1, string2, 1); 

  if(result == 0)
  {
    printf("\nYou are a Female LOL");
  }
  else if(result == 7)
  {
    printf("\nYou are a Male");
  }
  else
  {
    printf("\nUnspecified Gender");
  }

    // FAULTY CODE

    

   float area;
   char size;

   area = 3.1416 * 5 * 5;
   printf("The area of the circle with radius 5 is %.2f and considered", area);

   if (area < 100) {
    size = 'S';
    printf("\n%c or %s", size, small);
   }
   else if (area >= 100 && area < 200) {
    size = 'M';
    printf("\n%c or %s", size, medium);
   }
   else if (area > 200)
   printf("\nL or %s", large);

   

   
    
    printf("\nEnter your password: "); 
    scanf("%c", username1);
 
  

    int result = strncmp(username1, password1, 1);
 
     if(result == -11)
  {
    printf("\nCorrect Password!");
  }
  
   */

  int math1;
  int math2;
  int math3;
  int eng1;
  int eng2;
  int eng3;
  int science1;
  int science2;
  int science3;
  int mathavg = (math1 + math2 + math3)/3;
  int engavg = (eng1 + eng2+ eng3)/3;
  int scienceavg = (science1 + science2 + science3)/3;
  int mathtotal = math1 + math2 + math3;
  int engtotal = eng1 + eng2 + eng3;
  int sciencetotal = science1 + science2 + science3;

  printf("\nEnter Math Grades: ");
  scanf("%d %d %d", &math1, &math2, &math3);

  if (mathtotal <= 300 && mathavg >= 75) {
    printf("\nMath: %d - Pass", mathavg);
  }
   else if (mathtotal <= 300 && mathavg <= 74)
  {
    printf("\nMath: %d - Fail", mathavg);
  }

  printf("\nEnter English Grades: ");
  scanf("%d %d %d", &eng1, &eng2, &eng3);

   if (engtotal <= 300 && engavg >= 75)
  {
    printf("\nEng: %d - Pass", engavg);
  }
  else if (engtotal <=300 && engavg <= 74)
  {
    printf("\nEng: %d - Fail", engavg);
  }

  printf("\nEnter Science Grades: ");
  scanf("%d %d %d", &science1, &science2, &science3);
   if (sciencetotal <= 300 && scienceavg >= 75)
  {
    printf("\nSci: %d - Pass", scienceavg);
  }
  else if (sciencetotal <= 300 && scienceavg <= 74)
  {
    printf("\nSci: %d - Fail", scienceavg);
  }

  
 
 
  

  

 return 0;


}
    
    
    

