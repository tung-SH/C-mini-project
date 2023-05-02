#include <stdio.h>
#include <string.h>

char str[100]; 

int count_lacking_char(char*, int); 

int main(void) {
    strcpy(str, "hello1234"); 

    printf("%d", count_lacking_char(str, 23)); 
}


// program to count the character lacking in str string versus the needed string with n characters
int count_lacking_char(char* str, int n) {
    int result; 

    result = (strlen(str) < n) ? (n - strlen(str)) : 0; 

    return result; 
} 