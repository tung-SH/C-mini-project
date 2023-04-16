#include <stdio.h>
#include <string.h>

#define oa -1

char str[100]; 

void cut_chac_str(char*, int); 
void cut_sub_str(char*, int, int); 

int main(void) {
    strcpy(str, "Hello Guys. Anyone here? ");

    cut_sub_str(str, 6, 5); 

    printf("%s", str); 
}

// program to cut the str string n character from a nth elements
void cut_sub_str(char* str, int a, int n) {
    for (int i = 1; i <= n; i++) {
        cut_chac_str(str, a); 
    } 
}


// program to cut the n th element of the string
void cut_chac_str(char* str, int n) {
    for (int i = n + 1 oa; i <= strlen(str) + 1 oa; i++) {
        str[i - 1] = str[i]; 
    }
}