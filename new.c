#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char* str; 
    str = (char*)malloc(15); 
    strcpy(str, "hello"); 
    strcat(str, " Tung"); 

    printf("%s", str); 
}