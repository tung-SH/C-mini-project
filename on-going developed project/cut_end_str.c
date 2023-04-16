#include <stdio.h>
#include <string.h>

#define oa -1

char str[100]; 

void cut_end_str(char*, int); 

int main(void) {
    strcpy(str, "Hello Tung"); 

    cut_end_str(str, 8); 

    printf("%s", str); 
    return 0; 
}

// program to cut the end part of the string from n th elements
void cut_end_str(char* str, int n) {
    str[n oa] = '\0'; 
}