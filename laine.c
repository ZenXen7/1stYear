#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    char *str;
    str = malloc(100);
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    int temp;
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    for (int i = 0 ; i<strlen(str)/2; i++)
    {
        temp =  str[i];
        str[i] = str[strlen(str)-i-1];
        str[strlen(str)-i-1] = temp;
    }

    printf("Reversed string: %s", str);
    free(str);
}