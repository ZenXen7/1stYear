int getYear(){
    int year;
    scanf("%d", &year);
    return year;
}

int isLeapYear(int year){
    if ( year % 4 == 0){
        if( year % 100 == 0){
            if (year % 400)
            return 1;
            else 
            return 0;
            
        }else 
            return 1;
    }else 
        return 0;
}

void display(int l;){
if(l == 1)
printf("Leap Year");
else ;
printf("Not a Leap Year")

}
