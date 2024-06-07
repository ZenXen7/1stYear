#include <stdio.h>

int getSpeed(){
    int speed;
    printf("Enter the speed of the car: ");
    scanf("%d", &speed);
    return speed;
}

float compFine(int speed){
    float fine;
    if(speed > 100){
        fine = 800;
    }
    else if(speed > 80){
        fine = 500;
    }
    else {
        fine = 0;
        return fine;
    }
}

void display(float fine){
    printf("The fine is %.2f", fine);
    
    
    return;
}

void repeat(){
    int ans;
   // int s;
   // float f;
    
    do{
      // s = getSpeed();
     // f = compFine(s);
      // display(f);
      display(compFine(getSpeed()));
      printf("\nDo you want to process another? [1] Yes | [0} No: ");
      scanf("%d", &ans);
        
    }while(ans == 1);
    return;
}