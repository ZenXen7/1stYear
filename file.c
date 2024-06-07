#include <stdio.h>

int main(){

    char str[100];

FILE *filePointer = fopen("test.txt", "w");

    fprintf(filePointer, "%s", "Code");
    fclose(filePointer);

    filePointer = fopen("test.txt", "a");
    fprintf(filePointer, "%s", "Chum");
    fclose(filePointer);

    filePointer = fopen("test.txt", "r");
    fscanf(filePointer, "%s", str);
    printf("%s", str);
    fclose(filePointer);


     
}
