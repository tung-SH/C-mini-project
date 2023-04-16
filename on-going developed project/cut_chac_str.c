#include <stdio.h>
#include <string.h>

#define oa -1

char str[100]; 

void cut_chac_str(char*, int); 

int main(void) {
    strcpy(str, "hello guys, my name is Tung"); 

    cut_chac_str(str, 6); 

    printf("%s", str); 
}

// program to cut the n th element of the string 
void cut_chac_str(char* str, int n) {
    for (int i = n + 1 oa; i <= strlen(str) + 1 oa; i++) {
        str[i - 1] = str[i]; 
    }
}